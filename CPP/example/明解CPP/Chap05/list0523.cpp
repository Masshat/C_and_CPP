// �D����ӭȪ��̤j�ȡB�T�ӭȪ��̤j�Ȥ���� (�h��)

#include <iostream>
using namespace std;

//--- �Ǧ^a, b���̤j�� ---//
int max(int a, int b)
{
	return a > b ? a : b;
}

//--- �Ǧ^a, b, c���̤j�� ---//
int max(int a, int b, int c)
{
	int max = a;
	if (b > max) max = b;
	if (c > max) max = c;
	return max;
}

int main()
{
	int x, y, z;

	cout << "x���ȡG";
	cin >> x;

	cout << "y���ȡG";
	cin >> y;

	// ��ӭȪ��̤j��
	cout << "x�My���̤j�ȬO" << max(x, y) << "�C\n";

	cout << "z���ȡG";
	cin >> z;

	// �T�ӭȪ��̤j��
	cout << "x�By�Bz���̤j�ȬO" << max(x, y, z) << "�C\n";

	return 0;
}
