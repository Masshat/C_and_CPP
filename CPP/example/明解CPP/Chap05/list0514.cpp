// �N��Ӥ޼ƪ��ȥ洫�����

#include <iostream>
using namespace std;

//--- �洫�޼�x�My���� ---//
void swap(int& x, int& y)
{
	int t = x;
	x = y;
	y = t;
}

int main()
{
	int a, b;

	cout << "�ܼ�a�G";   cin >> a;
	cout << "�ܼ�b�G";   cin >> b;

	swap(a, b);							// �洫a�Mb

	cout << "�洫�ܼ�a�Mb���ȡC\n";
	cout << "�ܼ�a���ȬO" << a << "�C\n";
	cout << "�ܼ�b���ȬO" << b << "�C\n";

	return 0;
}
