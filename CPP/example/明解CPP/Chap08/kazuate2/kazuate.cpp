// �q�Ʀr�C�� (��2���G�D�n����)

#include <iostream>
#include "kazuate.h"
using namespace std;

int max_no = 9;				// ���ת��̤j��

int main()
{
	initialize();
	cout << "�q�Ʀr�C���}�l�I\n";

	do {
		gen_no();
		int hantei;
		do {
			hantei = judge(input());
			if (hantei > 0)
				cout << "\a�٭n��p�ڡC\n";
			else if (hantei < 0)
				cout << "\a�٭n��j�ڡC\n";
		} while (hantei != 0);
		cout << "���T���סC\n";
	} while (confirm_retry());

	return 0;
}
