// �ߺ�m��

#include <ctime>
#include <cstdlib>
#include <iostream>
using namespace std;

//--- �T�{�O�_�~��i�� ---//
bool confirm_retry()
{
	int cont;
	do {
		cout << "�A�@���ܡH<Yes�K1��No�K0>�G";
		cin >> cont;
	} while (cont != 0 && cont != 1);
	return bool(cont);			// �Ǧ^�ഫ��bool���A����
}

int main()
{
	srand(time(NULL));
	cout << "�ߺ�m�߶}�l!!\n";

	do {
		int x = rand() % 900 + 100;		// �T���
		int y = rand() % 900 + 100;		// �T���
		int z = rand() % 900 + 100;		// �T���
		int k;						// Ū�J����
		while (true) {
			cout << x << " + " << y << " + " << z << " = ";
			cin >> k;
			if (k == x + y + z) break;
			cout << "\a���F!!\n";
		}
	} while (confirm_retry());

	return 0;
}
