// ���L�����OBoolean���ϥνd��

#include <iostream>
#include "Boolean.h"
using namespace std;

//---���x�Py�O�_�۵� ---//
Boolean int_eq(int x, int y)
{
	return x == y;
}

int main()
{
	Boolean a;				// a �� False
	Boolean b = 100;		// b �� True�GBoolean(100)
	int     c;
	Boolean x[8];			// x[0]��x[7] �� False

	cout << "��ƭȡG";
	cin >> c;
	x[0] = int_eq(c, 5);	// x[0]
	x[1] = (c != 3);		// x[1] �� Boolean(c != 3)
	x[2] = Boolean::False;	// x[2] �� False
	x[3] = 1000;			// x[3] �� True�GBoolean(1000)

	cout << "a���ȡG" << int(a) << '\n';
	cout << "b���ȡG" << (const char*)b << '\n';

	for (int i = 0; i < 8; i++)
		cout << "x[" << i << "] = " << x[i] << '\n';

	return 0;
}
