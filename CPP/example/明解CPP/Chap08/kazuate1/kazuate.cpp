// �q�Ʀr�C�� (��1���G�D�n����)

#include <iostream>
using namespace std;

void initialize();	                             		// [��l��]  ���{�b�ɶ��ӳ]�w�üƪ���
void gen_no();				// [�s�@���D]  �H�üƲ���0 ~ max_no ����
int judge(int cand);		                                // [�P�_����]  �P�_cand �O�_�����T����
int input();				// [��J����]  �����a��Jmax_no ����
bool confirm_retry();	                   	// [�T�{�O�_�~��]  �T�{�O�_�A���i��C��

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
