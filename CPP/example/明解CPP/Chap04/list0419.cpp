// �N1, 2, 3, 4, 5���w���}�C���U�Ӥ�������� (for�ԭz)

#include <iostream>
using namespace std;

int main()
{
	int a[5];		// �������A��int���A�B�����Ƭ�5���}�C

	for (int i = 0; i < 5; i++)
		a[i] = i + 1;

	for (int i = 0; i < 5; i++)
		cout << "a[" << i << "] = " << a[i] << '\n';

	return 0;
}
