// �NŪ�J����ƥ[�` (��J9999�N�j���)

#include <iostream>
using namespace std;

int main ()
{
	int n;			//�[�`���Ӽ�
	cout << "�N��ƥ[�`�C\n";
	cout << "�n�[�`�X�Ӿ�ơG";
	cin >> n;
	cout << "��J9999�N�j����C\n";

	int sum = 0;		//�`�M
	for (int i = 0; i < n; i++) {
		int t;
		cout << "��ơG";
		cin >> t;
		if (t == 9999)
			goto Exit;
		sum += t;
	}
	cout << "�`�M��" << sum << "�C\n";

Exit:
	return 0;
}
