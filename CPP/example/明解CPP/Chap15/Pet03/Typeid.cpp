// ��ܫ��V�����O�����Щҫ������󤧫��A

#include <iostream>
#include <typeinfo>
#include "Pet.h"
using namespace std;

int main()
{
	Pdog d;			// ��
	Pcat c;			// ��
	Pmonkey m;		// �U
	Pet* p;			// ���V�ʪ����O�]�����O�^������

	p = &d;
	cout << "p�ҫ����O" << typeid(*p).name() << "���A������C\n";

	p = &c;
	cout << "p�ҫ����O" << typeid(*p).name() << "���A������C\n";

	p = &m;
	cout << "p�ҫ����O" << typeid(*p).name() << "���A������C\n";

	return 0;
}
