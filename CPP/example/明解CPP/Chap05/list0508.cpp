// �D��x���T����Py���G���褧�`�M

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

//--- �Ǧ^x���T����Py���G���褧�`�M ---//
double cubx_plus_sqry(double x, double y)
{
	return power(x, 3) + power(y, 2);
}

int main()
{
	double x;
	double y;

	cout << "�D��x���T����Py���G���褧�`�M�C\n";
	cout << "x���ȡG";	cin >> x;
	cout << "y���ȡG";	cin >> y;
	cout << "x���T����Py���G���褧�`�M�O" << cubx_plus_sqry(x, y) << "�C\n";

	return 0;
}

