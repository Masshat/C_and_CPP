// private�l��

#include "Base.h"

class Derived : private Base {
	void f() {
		pri = 1;	// �L�k�s��
		pro = 1;
		pub = 1;
	}
};

int main()
{
	Derived x;

	x.pri = 1;		// �L�k�s��
	x.pro = 1;		// �L�k�s��
	x.pub = 1;		// �L�k�s��

	return 0;
}
