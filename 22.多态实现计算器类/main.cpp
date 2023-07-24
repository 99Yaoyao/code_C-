#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <iostream>
using namespace std;

class 计算器基类 {
public:
	计算器基类() {
		数值1 = 0;
		数值2 = 0;
	}
	virtual int 计算器() {
		return 0;
	}
	int 数值1;
	int 数值2;
};

class 计算器加法 : public 计算器基类 {
public:
	int 计算器() {
		return 数值1 + 数值2;
	}
};

class 计算器减法 : public 计算器基类 {
public:
	int 计算器() {
		return 数值1 - 数值2;
	}
};

void test() {
	// 多态的使用条件
	// 父类指针或引用指向子类对象即可实现多态
	计算器基类* 计算1 = new 计算器加法;
	计算1->数值1 = 100;
	计算1->数值2 = 100;
	cout << 计算1->计算器() << endl; 
}

int main() {
	test();
	return 0;
}