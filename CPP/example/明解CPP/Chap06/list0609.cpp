// �ʺA���͡B��l�ƾ�ƪ���

#include <iostream>
using namespace std;

int main()
{
	int* x = new int(5);				// ���͡G���[��l�Ƥl

	cout << "*x = " << *x << '\n';

	delete x;						// ���

	return 0;
}
