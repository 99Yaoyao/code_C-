#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <iostream>

using namespace std;

class �������� { // �����ࣺ�޷�ʵ��������
public:
	void ��ʼ����() {
		��ˮ();
		����();
		���뱭��();
		�Ӹ���();
	}
private:
	virtual void ��ˮ() = 0; // ���麯��
	virtual void ����() = 0;
	virtual void ���뱭��() = 0;
	virtual void �Ӹ���() = 0;
};

//void ����() {
//	�������� * ָ�� = new ��������;
//}

class �������� : public �������� {
public:
	virtual void ��ˮ() {
		cout << "���Ȫˮ" << endl;
	}
	virtual void ����() {
		cout << "���ݿ��ȷ�" << endl;
	}
	virtual void ���뱭��() {
		cout << "�������ȱ�" << endl;
	}
	virtual void �Ӹ���() {
		cout << "����" << endl;
	}
};

class ���������� : public �������� {
public:
	virtual void ��ˮ() {
		cout << "����ˮ" << endl;
	}
	virtual void ����() {
		cout << "���ݰ�����" << endl;
	}
	virtual void ���뱭��() {
		cout << "��������" << endl;
	}
	virtual void �Ӹ���() {
		cout << "�����" << endl;
	}
};

void ��ʼ(��������& ����) { // ��������& ���� = ������; ����ָ��ָ�������������̬
	����.��ʼ����();
}

void test() {
	//
	��������* ����ָ�� = new ��������;
	����ָ��->��ʼ����();
	���������� ������;
	��ʼ(������);
}

int main() {
	test();
	return 0;
}