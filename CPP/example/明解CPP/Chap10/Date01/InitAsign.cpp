// �ϥΤ�����ODate�]�Ģ����^�Ӷi���l�ƻP���w

#include <iostream>
#include "Date.h"
using namespace std;

int main()
{
	Date x(2010, 11, 25);				// ��l��
	Date y = x;							// ��l��
	Date z = Date(2052, 10, 12);		// ��l��

	z = x;								// ���w
	y = Date(2107, 3, 6);				// ���w

	cout << "X = "
		 << x.Year() << "�~" << x.Month() << "��" << x.Day() << "��\n";

	cout << "y = "
		 << y.Year() << "�~" << y.Month() << "��" << y.Day() << "��\n";

	cout << "z = "
		 << z.Year() << "�~" << z.Month() << "��" << z.Day() << "��\n";

	return 0;
}
