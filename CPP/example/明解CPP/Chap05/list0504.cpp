// �D���T�Ӿ�ƭȪ��̤j�� (�[�W��ƭ쫬�ŧi)

#include <iostream>
using namespace std;

int max(int a, int b, int c);

int main()
{
	int a, b, c;

	cout << "�ܼ�a�G";   cin >> a;
	cout << "�ܼ�b�G";   cin >> b;
	cout << "�ܼ�c�G";   cin >> c;

	cout << "�̤j�ȬO" << max(a, b, c) << "�C\n";

	return 0;
}

//--- �Ǧ^a, b, c���̤j�� ---//
int max(int a, int b, int c)
{
	int max = a;
	if (b > max) max = b;
	if (c > max) max = c;
	return max;
}
