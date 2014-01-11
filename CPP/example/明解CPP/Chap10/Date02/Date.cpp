// ������ODate�]��2���G��@�����^

#include <ctime>
#include <sstream>
#include <iostream>
#include "Date.h"
using namespace std;

//--- Date���w�]�غc�l�]���Ѫ�����^---//
Date::Date()
{
	time_t current = time(NULL);		        // ���o�{�b���зǮɶ�
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

//--- �H�r��Ǧ^ ---//
string Date::to_string() const
{
	ostringstream s;
	s << year << "�~" << month << "��" << day << "��";
	return s.str();
}

//--- �b��X��ys�����Jx ---//
ostream& operator<<(ostream& s, const Date& x)
{
	return s << x.to_string();
}
