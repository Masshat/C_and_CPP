// �ƻs�}�C���Ҧ����������

#include <iostream>
using namespace std;

int main()
{
	const int n = 5;		// �}�Ca�Mb��������
	int a[n], b[n] = {0};		// �H0��l�ư}�Cb���Ҧ�����

	for (int i = 0; i < n; i++) {	// �N��Ū�J��}�Ca
		cout << "a[" << i << "] : ";
		cin >> a[i];
	}

	for (int i = 0; i < n; i++)		// �ƻs�}�Ca���Ҧ�������}�Cb
		b[i] = a[i];

	for (int i = 0; i < n; i++)		// ��ܰ}�Cb
		cout << "b[" << i << "] = " << b[i] << '\n';

	return 0;
}
