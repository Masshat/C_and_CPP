// �ʺA���;�ư}�C���� (�ҥ~�B�z)

#include <new>
#include <iostream>
using namespace std;

int main()
{
	int asize;				// �}�C��������
	cout << "�����ơG";
	cin >> asize;

	int* a;
	try {
		a = new int[asize];		// ����
	}
	catch (bad_alloc) {
		cout << "�]�����Ͱ}�C���ѤF�A�ҥH����{���C\n";
		return 1;
	}

	for (int i = 0; i < asize; i++)
		a[i] = i;

	for (int i = 0; i < asize; i++)
		cout << "a[" << i << "] = " << a[i] << '\n';

	delete[] a;				// ���

	return 0;
}
