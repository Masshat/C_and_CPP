// �d�����OPet�]��2���^���ϥνd�ҡA��G

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
		int k;
		do {
			cout << "�����i0�K����1�K�ߡ� 2�K�U�j�G";
			cin >> k;
		} while (k < 0 || k > 2);

		switch (k) {
		 case 0: MyPet[i] = new Pdog();		break;
		 case 1: MyPet[i] = new Pcat();		break;
		 case 2: MyPet[i] = new Pmonkey();	break;
		}
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
