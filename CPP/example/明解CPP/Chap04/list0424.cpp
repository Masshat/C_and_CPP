// �H1, 2, 3, 4, 5�Ӫ�l�ư}�C���U�Ӥ�������� (�z�L�p��ӨD��������)

#include <iostream>
using namespace std;

int main()
{
	int a[] = {1, 2, 3, 4, 5};
	int a_size = sizeof(a) / sizeof(a[0]);	// �}�Ca��������

	for (int i = 0; i < a_size; i++)
		cout << "a[" << i << "] = " << a[i] << '\n';

	return 0;
}
