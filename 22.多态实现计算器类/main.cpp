#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <iostream>
using namespace std;

class ���������� {
public:
	����������() {
		��ֵ1 = 0;
		��ֵ2 = 0;
	}
	virtual int ������() {
		return 0;
	}
	int ��ֵ1;
	int ��ֵ2;
};

class �������ӷ� : public ���������� {
public:
	int ������() {
		return ��ֵ1 + ��ֵ2;
	}
};

class ���������� : public ���������� {
public:
	int ������() {
		return ��ֵ1 - ��ֵ2;
	}
};

void test() {
	// ��̬��ʹ������
	// ����ָ�������ָ��������󼴿�ʵ�ֶ�̬
	����������* ����1 = new �������ӷ�;
	����1->��ֵ1 = 100;
	����1->��ֵ2 = 100;
	cout << ����1->������() << endl; 
}

int main() {
	test();
	return 0;
}