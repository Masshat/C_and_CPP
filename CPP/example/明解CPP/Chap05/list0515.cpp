// �N�T�Ӿ�ƭȪ@���Ƨ�

#include <iostream>
using namespace std;

//--- �洫�޼�x�My���� ---//
void swap(int& x, int& y)
{
	int t = x;
	x = y;
	y = t;
}

//--- �N�޼�a, b, c�@���Ƨ� ---//
void sort(int& a, int& b, int& c)
{
	if (a > b) swap(a, b);
	if (b > c) swap(b, c);
	if (a > b) swap(a, b);
}

int main()
{
	int a, b, c;

	cout << "�ܼ�a�G";   cin >> a;
	cout << "�ܼ�b�G";   cin >> b;
	cout << "�ܼ�c�G";   cin >> c;

	sort(a, b, c);			// �Na, b, c�@���Ƨ�

	cout << "�N���a, b, c�@���ƧǡC\n";
	cout << "�ܼ�a���ȬO" << a << "�C\n";
	cout << "�ܼ�b���ȬO" << b << "�C\n";
	cout << "�ܼ�c���ȬO" << c << "�C\n";

	return 0;
}
