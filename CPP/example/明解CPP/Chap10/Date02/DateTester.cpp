// ������ODate�]��2���^���ϥνd��

#include <iostream>
#include "Date.h"
using namespace std;

int main()
{
	Date today;							// ���Ѫ����
	Date birthday(1963, 11, 18);		// �ͤ�
	Date day[3];						// �}�C�]���Ѫ�����^

	cout << "today   = " << today << '\n';
	cout << "today���r����ܡG\"" << today.to_string() << "\"\n"; 
	cout << "birthday = " << birthday << '\n';
	for (int i = 0; i < 3; i++)
		cout << "day[" << i << "] = " << day[i] << '\n';

	return 0;
}
