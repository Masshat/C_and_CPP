// ��J��Ӿ�ƭȤ���A��ܱN��[����᪺��

#include <iostream>
using namespace std;

int main()
{
	int x;			// �Ψӥ[�������
	int y;			// �Ψӥ[�������

	cout << "�Nx�Py���[������p��C\n ";

	cout << "x���ȩMy���ȡG";		// �n�D��Jx���ȩMy����
	cin >> x >> y;						// �N��J����ƭȫ��w��x�My 

	cout << "x + y�O" << x + y << "�C\n";	// ���x + y����
	cout << "x - y�O" << x - y << "�C\n "; 	// ���x - y����
	cout << "x * y�O" << x * y << "�C\n ";	// ���x * y����
	cout << "x / y�O" << x / y << "�C\n "; 	// ���x / y���� (��)
	cout << "x % y�O" << x % y << "�C\n ";	// ���x % y���� (�l��)

	return 0;
}
