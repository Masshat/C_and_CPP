// �D���q1��n���`�M

#include <iostream>
using namespace std;

int main ()
{
	int n;

	cout << "�D���q1��n���`�M�C\n";
	do {
		cout << "n���ȡG";
		cin >> n;
	} while (n <= 0);

	int sum = 0;				// �X�p
	int i = 1;
	while (i <= n) {
		sum += i;				// �Ni�[��sum
		i++;					// ���Wi
	}
	cout << "�q1��" << n << "����`�M�O" << sum << "�C\n";

	return 0;
}
