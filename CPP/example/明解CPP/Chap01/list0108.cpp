// ��J��Ӿ�ƭȡA����ܱN���̥[������᪺��

#include <iostream>
using namespace std;

int main()
{
	int x;			// �Ψӥ[�������
	int y;			// �Ψӥ[�������

	cout << "�Nx�Py���[������p��C\n";

	cout << "x���ȡG";		// �n�D��Jx����
	cin >> x;				// �N��ƭȫ��w��x

	cout << "y���ȡG";		// �n�D��Jy����
	cin >> y;				// �N��ƭȫ��w��y 

	cout << "x + y�O" << x + y << "�C\n";		// ���x + y����
	cout << "x - y�O" << x - y << "�C\n ";		// ���x - y����
	cout << "x * y�O" << x * y << "�C\n ";		// ���x * y����
	cout << "x / y�O" << x / y << "�C\n ";		// ���x / y���� (��)
	cout << "x % y�O" << x % y << "�C\n ";	// ���x % y���� (�l��)

	return 0;
}
