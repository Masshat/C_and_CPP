// ������ODate�]��3��)���ϥνd�� �K �Ѥ����Z�n���{��

#include <string>
#include <iostream>
#include "Date.h"
using namespace std;

int main()
{
	Date today;						// ���Ѫ����
	Date birthday(1963, 11, 18);		                                                // �ͤ�
	Date day[3];						// �}�C�]���Ѫ�����^
	string dw[] = {"��", "�@", "�G", "�T", "�|", "��", "��"};

	cout << "today    = " << today;
	cout << "�]" << dw[today.DayOfWeek()] << "�^\n";

	cout << "today���r���{�G\"" << today.to_string() << "\"\n"; 

	cout << "birthday = " << birthday;
	cout << "�]" << dw[birthday.DayOfWeek()] << "�^\n";
	for (int i = 0; i < 3; i++) {
		cout << "day[" << i << "] = " << day[i];
		cout << "�]" << dw[day[i].DayOfWeek()] << "�^\n";
	}

	return 0;
}

