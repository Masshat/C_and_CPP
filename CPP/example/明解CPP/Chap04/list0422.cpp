// Ū�Jninzu�ӤH�����ƨ�����`���P����

#include <iostream>
using namespace std;

int main()
{
	const int ninzu = 6;	// �H��
	int tensu[ninzu];		// ninzu�H������
	int sum = 0;			// �`�M

	cout << "�D��" << ninzu << "�ӤH�����Ƥ��`���P�����C\n";
	for (int i = 0; i < ninzu; i++) {
		cout << i + 1 << "�������ơG";
		cin >> tensu[i];		//Ū�Jtensu[i]
		sum += tensu[i];		//�Ntensu[i]�[��sum 
	}

	cout << "�`���O" << sum << "���C\n";
	cout << "�����O" << double(sum) / ninzu << "���C\n";

	return 0;
}
