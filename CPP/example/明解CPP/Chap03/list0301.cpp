// ��ܿ�J��������u�` (�i�H���ư���)

#include <iostream>
using namespace std;

int main ()
{
	char retry;			// �A�Ӥ@���H

	do {
		int month;
		cout << "�D�o�u�`�C\n���Ӥ���G";
		cin >> month;

		if (month >= 3 && month <= 5)		// 3��B4��B5��
			cout << "���O�K�u�C\n";
		else if (month >= 6 && month <= 8)	// 6��B7��B8��
			cout << "���O�L�u�C\n";
		else if (month >= 9 && month <= 11)	// 9��B10��B11��
			cout << "���O��u�C\n";
		else if (month == 12 || month == 1 || month == 2)	// 12��B1��B2��
			cout << "���O�V�u�C\n";

		cout << "�A�Ӥ@���H Y�KYes��N�KNo�G";
		cin >> retry;
	} while (retry == 'Y' || retry == 'y');

	return 0;
}
