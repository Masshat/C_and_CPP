// �۰ʥͩR�g���M�R�A�ͩR�g��

#include <iostream>
using namespace std;

int fx = 0;				// �R�A�ͩR�g�����ɮץͦs�Ŷ�

void func()
{
	static int sx = 0;	// �R�A�ͩR�g���ϰ϶��ͦs�Ŷ�
	int 	   ax = 0;	// �۰ʥͩR�g���ϰ϶��ͦs�Ŷ�
				
	cout << ax++ << "  " << sx++ << "  " << fx++ << '\n';
}

int main()
{
	cout << "ax sx fx\n";
	cout << "---------\n";
	for (int i = 0; i < 10; i++)
		func();

	return 0;
}
