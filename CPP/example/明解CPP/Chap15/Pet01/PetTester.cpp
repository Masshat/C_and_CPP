// �d�����OPet�]�Ģ����^���ϥνd��

#include <iostream>
#include "Pet.h"
using namespace std;

int main()
{
	const int max = 10;			// �d�����̤j�ƶq
	int no;				// �d�����ƶq
	Pet* MyPet[max];			// ���V�d�������Ф��}�C

	cout << "�@�@���X���d���O�]1��" << max << "�^�G";
	do {
		cin >> no;
	} while (no < 1 || no > max);						// �ܦ�1��no��max

	for (int i = 0; i < no; i++) {						// ��J���
		MyPet[i] = new Pet();
		MyPet[i]->Input();
	}

	cout << "\n�d�����@����\n";					// �@����
	for (int i = 0; i < no; i++)
		cout << *MyPet[i] << '\n';

	cout << "\n���j�a�@�ۧڤ��СC\n";		// �ۧڤ���
	for (int i = 0; i < no; i++)
		MyPet[i]->Sintro();

	for (int i = 0; i < no; i++)
		delete MyPet[i];

	return 0;
}
