// ��ܾ�ƫ��A�ү��{����

#include <climits>
#include <iostream>
using namespace std;

int main()
{
	cout << "���B�z������ƫ��A�ү��{���ȡC\n";

	cout << "char         �G" << CHAR_MIN  << "��" << CHAR_MAX  << '\n';
	cout << "signed char  �G" << SCHAR_MIN << "��" << SCHAR_MAX << '\n';
	cout << "unsigned char�G" << 0         << "��" << UCHAR_MAX << '\n';

	cout << "short int�G" << SHRT_MIN << "��" << SHRT_MAX << '\n';
	cout << "int      �G" << INT_MIN  << "��" << INT_MAX  << '\n';
	cout << "long int �G" << LONG_MIN << "��" << LONG_MAX << '\n';

	cout << "unsigned short int�G" << 0 << "��" << USHRT_MAX << '\n';
	cout << "unsigned int      �G" << 0 << "��" << UINT_MAX  << '\n';
	cout << "unsigned long int �G" << 0 << "��" << ULONG_MAX << '\n';

	return 0;
}
