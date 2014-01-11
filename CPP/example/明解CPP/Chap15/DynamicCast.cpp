// �ʺA�૬�P���Ѯɪ����

#include <iostream>
using namespace std;

//===== �����O =====//
class Base {
	virtual void f() { }	// �������
};

//===== �l�����O =====//
class Derived : public Base {

};

int main()
{
	Base base;
	Derived derived;

	Derived* p1 = dynamic_cast<Derived*>(&base);	         // ���ѡG�ܬ��ū���
	Derived* p2 = dynamic_cast<Derived*>(&derived);          // ���\

	cout << "p1 = " << p1 << '\n';
	cout << "p2 = " << p2 << '\n';

	try {
		Derived& r1 = dynamic_cast<Derived&>(base);	    // ���ѡG�e�Xbad_cast
	} catch (bad_cast) {
		cout << "r1���j���૬����\n";
	}

	try {
		Derived& r2 = dynamic_cast<Derived&>(derived);	// ���\
	} catch (bad_cast) {
		cout << "r2���j���૬����\n";		            // ���|����
	}

	return 0;
}
