// ������Y�B��l�B�۵��B��l�B�޿�_�w�B��l�Ҳ��ͪ���

#include <iostream>
using namespace std;

int main()
{
	int a, b;
	cout << "���a, b�G";
	cin >> a >> b;

	cout << boolalpha;
	cout << "a <  b = " << (a <  b) << '\n';
	cout << "a <= b = " << (a <= b) << '\n';
	cout << "a >  b = " << (a >  b) << '\n';
	cout << "a >= b = " << (a >= b) << '\n';
	cout << "a == b = " << (a == b) << '\n';
	cout << "a != b = " << (a != b) << '\n';
	cout << "!a     = " << (!a)     << '\n';
	cout << "!b     = " << (!b)     << '\n';

	return 0;
}
