#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <string>
using namespace std;

class ��������� {
public:
	���������() {
		cout << "���������Ĺ��캯��" << endl;
	}
//	virtual ~���������() { ��������������������������
//		cout << "������������������" << endl;
//	}

	virtual ~���������() = 0; // ������������Ҫ��ȫ�ֺ�������

	virtual void ����˵��() = 0;
};

���������::~���������() {
	cout << "���������Ĵ���������" << endl;
}

class è : public ��������� {
public:
	è(string è��) {
		cout << "è��Ĺ��캯��" << endl;
		���� = new string(è��);
	}
	~è() {
		cout << "è�����������" << endl;
		if (���� != NULL) {
			delete ����;
			���� = NULL;
		}
	}
	virtual void ����˵��() {
		cout << *���� << "��˵��������" << endl;
	}
	string* ����;
};

void test() {
	���������* p = new è("��ķ");
	p->����˵��();
	delete p;
}

int main() {
	test();
	return 0;
}