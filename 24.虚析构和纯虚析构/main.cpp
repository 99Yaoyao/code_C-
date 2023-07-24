#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <string>
using namespace std;

class 动物抽象类 {
public:
	动物抽象类() {
		cout << "动物抽象类的构造函数" << endl;
	}
//	virtual ~动物抽象类() { 虚析构，会调用子类的析构函数
//		cout << "动物抽象类的析构函数" << endl;
//	}

	virtual ~动物抽象类() = 0; // 纯虚析构，需要在全局函数声明

	virtual void 动物说话() = 0;
};

动物抽象类::~动物抽象类() {
	cout << "动物抽象类的纯析构函数" << endl;
}

class 猫 : public 动物抽象类 {
public:
	猫(string 猫名) {
		cout << "猫类的构造函数" << endl;
		名字 = new string(猫名);
	}
	~猫() {
		cout << "猫类的析构函数" << endl;
		if (名字 != NULL) {
			delete 名字;
			名字 = NULL;
		}
	}
	virtual void 动物说话() {
		cout << *名字 << "在说：喵喵喵" << endl;
	}
	string* 名字;
};

void test() {
	动物抽象类* p = new 猫("汤姆");
	p->动物说话();
	delete p;
}

int main() {
	test();
	return 0;
}