// �ϥ�#if���O�ӹF�����{���[��

#include <iostream>
using namespace std;

#define	DEBUG	0

int main()
{
	int	a = 5;
	int	x = 1;

#if DEBUG == 1
	a = x;				/*�Nx���w��a */
#endif

	cout << "a���Ȭ�" << a << "�C\n";

	return 0;
}
