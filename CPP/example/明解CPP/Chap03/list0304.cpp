// �N����ƭȭ˼Ʀ�0���� (��1��)

#include <iostream>
using namespace std;

int main ()
{
	int x;

	cout << "�}�l�˼ơC\n";
	do {
		cout << "����ƭȡG";
		cin >> x;
	} while (x <= 0);

	while (x >= 0) {
		cout << x << "\n";		// ���x����
		x--;					// ����x���� (�N�ȴ�1)
	}

	return 0;
}
