// Ū�J��Ӿ�ƭȨ���ܨ䤤�����p��

#include <iostream>
using namespace std;

int main()
{
	int a, b;

	cout << "���a�G";   cin >> a;
	cout << "���b�G";   cin >> b;

	int min;		// ���p����
	if (a < b)
		min = a;
	else
		min = b;

	cout << "���p���ȬO" << min << "�C\n";

	return 0;
}
