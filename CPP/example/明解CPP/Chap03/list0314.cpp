// �NŪ�J����ƥ[�` (��J0�N����)

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
		cout << "��� (��J0�N����)�G";
		cin >> t;
		if (t == 0) break;		// ���Xfor�ԭz
		sum += t;
	}
	cout << "�`�M��" << sum << "�C\n";

	return 0;
}
