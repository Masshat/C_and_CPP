// Ū�J����ƭȫ�H�ۤϪ��������

#include <iostream>
using namespace std;

int main ()
{
	int x;

	cout << "�H�ۤϪ�������ܥ���ƭȡC\n";
	do {
		cout << "����ƭȡG";
		cin >> x;
	} while (x <= 0);

	cout << "�ϹL��Ū�h�O";
	while (x > 0) {
		cout << x % 10;			// ���x���̤p���
		x /= 10;					// �Nx���H10
	}
    cout << "�C\n";

	return 0;
}
