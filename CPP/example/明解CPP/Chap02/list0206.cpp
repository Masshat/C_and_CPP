// �YŪ�J����ƭȬO���Ȫ��ܡA�N�P�_�ӭȬO�����٬O�_�ƨ���ܵ��G

#include <iostream>
using namespace std;

int main()
{
	int n;

	cout << "��ƭȡG";
	cin >> n;

	if (n > 0)
		if (n % 2 == 0)
			cout << "�ӭȬO���ơC\n";
		else
			cout << "�ӭȬO�_�ơC\n";
	else
		cout << "\a��J�����O���ȡC\n";

	return 0;
}
