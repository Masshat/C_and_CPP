// �NŪ�J����ƥ[�` (�b�`�M���W�L1000���d�򤺶i��[�`)

#include <iostream>
using namespace std;

int main ()
{
	int n;			// �[�`���Ӽ�
	cout << "�N��ƥ[�`�C\n";
	cout << "�n�[�`�X�Ӿ�ơG";
	cin >> n;

	int sum = 0;		// �`�M
	for (int i = 0; i < n; i++) {
		int t;
		cout << "��ơG";
		cin >> t;
		if (sum + t > 1000) {
			cout << "\a�`�M�W�L1000�F�C\n�L���̫᪺�ƭȡC\n";
			break; 
		}
		sum += t;
	}
	cout << "�`�M��" << sum << "�C\n";

	return 0;
}
