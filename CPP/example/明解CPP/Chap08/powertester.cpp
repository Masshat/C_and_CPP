// �Ǧ^����B�⤧�Ȫ����

#include <iostream>
using namespace std;

//--- �Ǧ^x��n���� ---//
double power(double x, int n);

int main()
{
	double a;
	int    b;

	cout << "�Da��b����C\n";
	cout << "���a�G";	cin >> a;
	cout << "���b�G";	cin >> b;
	cout << a << "��" << b << "���謰" <<
			power(a, b) << "�C\n";

	return 0;
}

