// �NŪ�J����ƥ[�` (���[�`�t��)

#include <iostream>
using namespace std;

int main ()
{
	int n;			// �[�`���Ӽ�
	cout << "�N��ƥ[�`�C\n";
	cout << "�n�[�`�X�Ӿ�ơG";
	cin >> n;

	int sum = 0;		//�`�M
	for (int i = 0; i < n; i++) {
		int t;
		cout << "��ơG";
		cin >> t;
		if (t < 0) {
			cout << "\a�t�Ƥ��i��[�`�C\n";
			continue;
		}
		sum += t;
	}
	cout << "�`�M��" << sum << "�C\n";

	return 0;
}
