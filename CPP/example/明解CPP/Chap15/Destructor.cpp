// �~�ӻP�Ѻc�l

#include <iostream>
using namespace std;

//--- �����O ---//
class Base {
public:
     Base() { cout << "Base���غc�l\n"; }		               // �غc�l
   ~Base() { cout << "Base���Ѻc�l\n"; }			// �Ѻc�l
};

//--- �l�����O ---//
class Derived : public Base {
	int* a;
public:
   Derived() {	a = new int[10]; cout << "�إ߰}�C�C\n"; }             // �غc�l
   ~Derived() { delete[] a; 	 cout << "�ѩ�}�C�C\n"; }                     // �Ѻc�l
};

int main()
{
	Base* ptr = new Derived();		                                // �إ�Derived

	delete ptr;						// �R��Base

	return 0;
}
