// ��}�B��l�M�����ѷӹB��l

#include <iostream>
using namespace std;

int main()
{
	int x = 100;
	int y = 200;
	cout << "x = " << x << '\n';
	cout << "y = " << y << '\n';
	cout << "-------\n";

	int* ptr = &x;				// ptr���Vx
	*ptr = 300;				// �N300���w��*ptr (�]�N�Ox)
	cout << "x = " << x << '\n';
	cout << "y = " << y << '\n';
	cout << "-------\n";

	ptr = &y;					// ptr���Vy
	*ptr = 400;				// �N400���w��*ptr (�]�N�Oy)
	cout << "x = " << x << '\n';
	cout << "y = " << y << '\n';

	return 0;
}
