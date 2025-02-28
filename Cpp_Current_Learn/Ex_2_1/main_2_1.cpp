#include <iostream>
#include <thread>
//测试会报错
class Sum {
public:
	Sum(int& _a) :a(_a) {}
	void operator()() {
		for (int i = 0; i < 100000000; i++) {
			sum += a;
			//std::cout << a << std::endl;
		}
	}
private:
	int a;
	int sum = 0;
};

int main() {
	if (1) {
		int a = 1;//引用局部变量
		Sum sum(a);
		std::thread t(sum);
		t.detach();//不等待
	}
	while (1) {
		;
	}
	return 0;
}