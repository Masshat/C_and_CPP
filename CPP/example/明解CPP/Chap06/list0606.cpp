// �N�}�C�������f�V�ƦC

#include <iostream>
using namespace std;

//--- �N�����Ƭ�n���}�Ca�f�V�ƦC ---//
void reverse(int a[], int n)
{
	for (int i = 0; i < n /2; i++) {
		int t = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = t;
	}
}

int main()
{
	const int n = 5;
	int c[n];

	for (int i = 0; i < n; i++) {		// Ū�J��}�Cc
		cout << "c[" << i << "] : ";
		cin >> c[i];
	}
	reverse(c, n);					// �N�}�Cc�f�V�ƦC

	cout << "�N�����f�V�ƦC�C\n";
	for (int i = 0; i < n; i++)			// ��ܰ}�Cc
		cout << "c[" << i << "] = " << c[i] << '\n';

	return 0;
}
