// �q�Ʀr�C�� (��2���G��X�J����)

#include <iostream>
#include "kazuate.h"
using namespace std;

//--- �n�D��J  ---//
static void prompt()
{
	cout << "�q0�}�l��" << max_no
		 << "����Ʀr�G";
}

//--- Ū�J�ѵ�  ---//
int input()
{
	int kazu;
	do {
		prompt();
		cin >> kazu;
	} while (kazu < 0 || kazu > max_no);
	return kazu;
}

//--- �T�{�O�_�~�� ---//
bool confirm_retry()
{
	int cont;
	cout << "�n�A�Ӥ@���ܡH\n"
		 << "<Yes ... 1 / No ... 0>�G";
	cin >> cont;
	return bool(cont);
}
