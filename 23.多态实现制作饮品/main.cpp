#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <iostream>

using namespace std;

class 制作步骤 { // 抽象类：无法实例化对象
public:
	void 开始制作() {
		煮水();
		冲泡();
		倒入杯子();
		加辅料();
	}
private:
	virtual void 煮水() = 0; // 纯虚函数
	virtual void 冲泡() = 0;
	virtual void 倒入杯子() = 0;
	virtual void 加辅料() = 0;
};

//void 测试() {
//	制作步骤 * 指针 = new 制作步骤;
//}

class 制作咖啡 : public 制作步骤 {
public:
	virtual void 煮水() {
		cout << "煮矿泉水" << endl;
	}
	virtual void 冲泡() {
		cout << "冲泡咖啡粉" << endl;
	}
	virtual void 倒入杯子() {
		cout << "倒进咖啡杯" << endl;
	}
	virtual void 加辅料() {
		cout << "加糖" << endl;
	}
};

class 制作板蓝根 : public 制作步骤 {
public:
	virtual void 煮水() {
		cout << "煮生水" << endl;
	}
	virtual void 冲泡() {
		cout << "冲泡板蓝根" << endl;
	}
	virtual void 倒入杯子() {
		cout << "倒进杯具" << endl;
	}
	virtual void 加辅料() {
		cout << "加枸杞" << endl;
	}
};

void 开始(制作步骤& 制作) { // 制作步骤& 制作 = 板蓝根; 父类指针指向子类对象发生多态
	制作.开始制作();
}

void test() {
	//
	制作步骤* 父类指针 = new 制作咖啡;
	父类指针->开始制作();
	制作板蓝根 板蓝根;
	开始(板蓝根);
}

int main() {
	test();
	return 0;
}