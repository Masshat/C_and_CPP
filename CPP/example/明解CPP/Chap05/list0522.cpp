// �Ǧ^�}�C�������ѷӪ����

#include <iostream>
using namespace std;

const int a_size = 5;		// �}�Ca��������
int a[a_size];

//--- �Ǧ^a[idx]���ѷ�---//
int& r(int idx)
{
	return a[idx];			// �Ǧ^���Va[idx]���ѷ�
}

int main()
{
	for (int i = 0; i < a_size; i++)
		r(i) = i;

	for (int i = 0; i < a_size; i++)
		cout << "r(" << i << ") = " << r(i) << '\n';

	return 0;
}
