// �нT�{�e�m�Φ���++x�O�m���ȹB�⦡�n
// �ӫ�m�Φ���x++�O�m�k�ȹB�⦡�n

#include <iostream>
using namespace std;

int main ()
{
	int x = 0;

	++x = 5;				// OK�G�e�m�Φ��i�H�m����
	cout << "x���ȬO" << x << "\n";

	x++ = 10;				// ���~�G��m�Φ����i�H�m����
	cout << "x���ȬO" << x << "\n";

	return 0;
}
