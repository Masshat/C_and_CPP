// �ѷӪ���

#include <iostream>
using namespace std;

int main()
{
	int  x = 1;
	int  y = 2;
	int& a = x;					// �Hx�ӱNa��l�� (a�ѷ�x)
	cout << "a = " << a << '\n';
	cout << "x = " << x << '\n';
	cout << "y = " << y << '\n';

	a = 5;						// �N5���w��a
	cout << "a = " << a << '\n';
	cout << "x = " << x << '\n';
	cout << "y = " << y << '\n';

	return 0;
}
