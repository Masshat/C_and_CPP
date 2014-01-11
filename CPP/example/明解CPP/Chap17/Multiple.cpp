// �h���~�ӡ]�����O����l�ơB���Ҽҽk�ʪ�����^

#include <iostream>
using namespace std;

//===== �����O�� =====//
class Base1 {
public:
	int x;

	Base1(int a = 0) : x(a) {				// �غc�l
		cout << "�NBase1::x�H" << x << "�Ӫ�l�ơC\n";
	}

	void Print() { cout << "�o�OBase1���O�Gx = " << x << '\n'; }
};

//===== �����O�� =====//
class Base2 {
public:
	int x;

	Base2(int a = 0) : x(a) {				// �غc�l
		cout << "�NBase2::x�H" << x << "�Ӫ�l�ơC\n";
	}

	void Print() { cout << "�o�OBase2���O�Gx = " << x << '\n'; }
};

//===== �l�����O =====//
class Derived : public Base1, public Base2 {
	int y;

public:
	Derived(int a, int b, int c) : y(c), Base2(a), Base1(b) {   // �غc�l
		cout << "�NDerived::y�H" << y << "�Ӫ�l�ơC\n";
	}

 	void func(int a, int b) {
	//	x = 1;					// ���~�G�ҽk
		Base1::x = a;
		Base2::x = b;
	}
};

int main()
{
	Derived z(1, 2, 3);

	z.func(1, 2);
//	z.Print();					// ���~�G�ҽk
	z.Base1::Print();
	z.Base2::Print();

	return 0;
}
