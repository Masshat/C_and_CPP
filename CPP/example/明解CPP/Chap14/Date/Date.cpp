// �~����������ODate�]��@�����^

#include <ctime>
#include <sstream>
#include <iostream>
#include "Date.h"
using namespace std;

//--- �w�]�غc�l ---//
Date::Date()
{
	time_t current = time(NULL);			// ���o�{�b���ɶ�
	struct tm* local = localtime(&current);	// �ഫ���U�������ɶ�
	year  = local->tm_year + 1900;			// �~�Gtm_year�O�~-1900
	month = local->tm_mon + 1;				// ��Gtm_mon�O0��11
	day	  = local->tm_mday;
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

//--- �H�r��Ǧ^ ---//
string Date::to_string() const
{
	unsigned long idate = year * 10000UL + month * 100UL + day;
	ostringstream s;

	if (idate < 18680908UL)
		s << year;
	else if (idate < 19120730UL)
		s << "���v" << (year - 1867);
	else if (idate < 19261225UL)
		s << "�j��" << (year - 1911);
	else if (idate < 19890108UL)
		s << "�L�M" << (year - 1925);
	else
		s << "����" << (year - 1988);
	s << "�~" << month << "��" << day << "��";

	return s.str();
}

//--- ���J��ostream ---//
ostream& operator<<(ostream& s, const Date& x)
{
	return s << x.to_string();
}
