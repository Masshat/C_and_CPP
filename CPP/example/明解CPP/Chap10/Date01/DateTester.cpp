// ������ODate�]�Ģ����^���ϥνd��

#include <iostream>
#include "Date.h"
using namespace std;

int main()
{
	Date birthday(1963, 11, 18);		// �ͤ�

	cout << "birthday = " << birthday.Year()  << "�~"
						  << birthday.Month() << "��"
						  << birthday.Day()	  << "��\n";

	return 0;
}
