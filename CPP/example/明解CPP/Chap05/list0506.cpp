// �D������

#include <iostream>
using namespace std;

//--- �Ǧ^x��n���� ---//
double power(double x, int n)
{
	double tmp = 1.0;

	while (n-- > 0)
		tmp *= x;	//�Nx�����tmp 
	return tmp;
}

int main()
{
	double a;
	int    b;

	cout << "�D��a��b����C\n";
	cout << "���a�G";	cin >> a;
	cout << "���b�G";	cin >> b;
	cout << a << "��" << b << "����O" << power(a, b) << "�C\n";

	return 0;
}
