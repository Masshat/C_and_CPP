// ��ܦr��`�Ȫ����A�P����

#include <iostream>
#include <typeinfo>
using namespace std;

int main()
{
	cout << "���r��`��\"ABC\"\n";
	cout << "  ���A�G"   << typeid("ABC").name()
		 << "  ���סG" << sizeof("ABC") << "\n\n";

	cout << "���r��`��\"\"\n";
	cout << "  ���A�G"   << typeid("").name()
		 << "  ���סG" << sizeof("") << "\n\n";

	cout << "���r��`��\"abc\\0def\"\n";
	cout << "  ���A�G"   << typeid("abc\0def").name()
		 << "  ���סG" << sizeof("abc\0def") << "\n\n";

	return 0;
}
