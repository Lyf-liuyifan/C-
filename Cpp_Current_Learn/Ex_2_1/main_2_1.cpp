#include <iostream>
#include <thread>
//���Իᱨ��
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
		int a = 1;//���þֲ�����
		Sum sum(a);
		std::thread t(sum);
		t.detach();//���ȴ�
	}
	while (1) {
		;
	}
	return 0;
}