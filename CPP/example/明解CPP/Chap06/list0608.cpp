// �ʺA���;�ƪ���

#include <iostream>
using namespace std;

int main()
{
	int* x = new int;			// ���� (�T�O�O�аϰ�)

	cout << "��ơG";
	cin >> *x;

	cout << "*x = " << *x << '\n';

	delete x;					// ��� (����O�аϰ�)

	return 0;
}
