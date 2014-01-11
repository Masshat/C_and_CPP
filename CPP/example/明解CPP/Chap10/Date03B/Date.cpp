// ������ODate�]��3��B�G��@����)�^

#include <ctime>
#include <sstream>
#include <iostream>
#include "Date.h"
using namespace std;

//--- Date���w�]�غc�l�]���Ѫ�����^---//
Date::Date()
{
	time_t current = time(NULL);			// ���o�{�b���зǮɶ�
	struct tm* local = localtime(&current);		// �ഫ���U�������ɶ�

	year  = local->tm_year + 1900;		// �~�Gtm_year�O�~-1900
	month = local->tm_mon + 1;			// ��Gtm_mon�O0��11
	day	  = local->tm_mday;
}

//--- Date���غc�l�]���w�n���~���^---//
Date::Date(int y, int m, int d)
{
	year  = y;
	month = m;
	day	  = d;
}

//---�H�r��Ǧ^ ---//
string Date::to_string() const
{
	ostringstream s;
	s << year << "�~" << month << "��" << day << "��";
	return s.str();
}

//--- �Ǧ^�P���]�P�����P�������O����0��6�^---//
int Date::DayOfWeek() const
{
	int y = year;
	int m = month;
	if (m == 1 || m == 2) {
		y--;
		m += 12;
	}
	return (y + y / 4 - y / 100 + y / 400 + (13 * m + 8) / 5 + day) % 7;
}

//--- �b��X��ys�����Jx ---//
ostream& operator<<(ostream& s, const Date& x)
{
	return s << x.to_string();
}
