// ��l�ƻP���w/�ǭȻP�ǧ}������

#include <iostream>
using namespace std;

//===== �Ψ����Ҫ����O =====//
class Test {
public:
	Test() {					      	// �w�]�غc�l
		 cout << "��l�ơGTest()\n";
	}

	Test(const Test& t) {				// �ƻs�غc�l
		cout << "��l�ơGTest(const Test&)\n";
	}

	Test& operator=(const Test& t) {	// ���w�B��l
		cout << "���w�GTest = Test\n"; return *this;
	}
};

//--- �ǭ� ---//
void value(Test a) { }

//--- �ǧ} ---//
void reference(Test& a)  { }

int main()
{
	Test x;
	Test y = x;
	Test z(x);
	y = x;
	value(x);
	reference(x);
	return 0;
}
