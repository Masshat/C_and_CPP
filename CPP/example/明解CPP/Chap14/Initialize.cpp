// �ΨӽT�{�����O�P��������l�ƪ����O�s

#include <iostream>
using namespace std;

//--- Derived�������O ---//
class Base {
	int x;
public:
	Base(int a = 0) : x(a) { cout << "�NBase::x�H" << x << "�Ӫ�l�ơC\n"; }
};

//--- �]�t�bDerived���������O ---//
class Memb {
	int x;
public:
	Memb(int a = 0) : x(a) { cout << "�NMemb::x�H" << x << "�Ӫ�l�ơC\n"; }
};

//--- Derived�|�qBase�}�lpublic�l�� ---//
class Derived : public Base {
	int y;
	Memb m1;
	Memb m2;
	void say() { y = 0; cout << "�NDerived::y�H" << y << "�Ӫ�l�ơC\n"; }

public:
	Derived()	                                                              { say(); }
	Derived(int a, int b, int c) : m2(a), m1(b), Base(c) { say(); }
};

int main()
{
	Derived d1;

	cout << '\n';

	Derived d2(1, 2, 3);

	return 0;
}
