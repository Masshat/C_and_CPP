// �Ǧ^�ѷӪ����

#include <iostream>
using namespace std;

//--- �Ǧ^���Vx���ѷ� ---//
int& ref()
{
	static int x;	// �R�A�ͩR�g��
	return x;
}

int main()
{
	ref() = 5;		// �N�ȫ��w��ref()
	cout << "ref() = " << ref() << '\n';

	return 0;
}
