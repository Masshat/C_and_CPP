// Ū�J����ƭȥi�H�Q10�㰣�ܡH

#include <cmath>
#include <iostream>
using namespace std;

int main()
{
	double x;

	cout << "��ƭȡG";
	cin >> x;

	if (double m = fmod(x, 10)) {
		cout << "�ӭȤ���Q10�㰣�C\n";
		cout << "�l�ƬO" << m << "�C\n";
	} else {
		cout << "�ӭȥi�H�Q10�㰣�C\n";
	}

	return 0;
}
