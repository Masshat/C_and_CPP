// �N�}�C�����f�V�ƦC�����

#include <ctime>
#include <cstdlib>
#include <iostream>
using namespace std;

int main()
{
	const int n = 7;			// �}�Ca��������
	int a[n];

	srand(time(NULL));		// �N�üƪ��ؤl��l��
	for (int i = 0; i < n; i++) {
		a[i] = rand() % 100;
		cout << "a[" << i << "] = " << a[i] << '\n';
	}

	for (int i = 0; i < n / 2; i++) {
		int t = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = t;
	}

	cout << "�N�������ƦC���Ǥ���F�C\n";
	for (int i = 0; i < n; i++)
		cout << "a[" << i << "] = " << a[i] << '\n';

	return 0;
}
