// ��Ū�J���Ȩ���ܲq������� (�u����0�B1�B2)

#include <iostream>
using namespace std;

int main ()
{
	int hand;

	do {
		cout << "�п�ܤ�� (0�K���Y��1�K�ŤM��2�K��)�G";
		cin >> hand;
	} while (hand < 0 || hand > 2);

	switch (hand) {
	 case 0: cout << "���Y\n";	  break;
	 case 1: cout << "�ŤM\n";   break;
	 case 2: cout << "��\n";	  break;
	}

	return 0;
}
