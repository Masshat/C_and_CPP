// Ū�J����ƭȥi�H�Q10�㰣�ܡH

#include <iostream>
using namespace std;

int main()
{
	int n;

	cout << "��ƭȡG";
	cin >> n;

	if (int m = n % 10) {
		cout << "�ӭȤ���Q10�㰣�C\n";
		cout << "�̤p��ƬO" << m << "�C\n";
	} else {
		cout << "�ӭȥi�H�Q10�㰣�C\n";
	}

	return 0;
}
