// �D���T�Ӿ�ƭȤ����̤j��

#include <iostream>
using namespace std;

int main()
{
	int a, b, c;

	cout << "���a�G";   cin >> a;
	cout << "���b�G";   cin >> b;
	cout << "���c�G";   cin >> c;

	int max = a;
	if (b > max) max = b;
	if (c > max) max = c;

	cout << "�̤j�ȬO" << max << "�C\n";

	return 0;
}
