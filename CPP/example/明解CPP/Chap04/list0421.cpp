// Ū�J���ӤH�����ƨ�����`���P����

#include <iostream>
using namespace std;

int main()
{
	int tensu[6];		// ���H������
	int sum = 0;		// �`�M

	cout << "�D�����ӤH�����Ƥ��`���P�����C\n";
	for (int i = 0; i < 6; i++) {
		cout << i + 1 << "�������ơG";
		cin >> tensu[i];		// Ū�Jtensu[i]
		sum += tensu[i];		// �Ntensu[i]�[��sum 
	}

	cout << "�`���O" << sum << "���C\n";
	cout << "�����O" << double(sum) / 6 << "���C\n ";

	return 0;
}
