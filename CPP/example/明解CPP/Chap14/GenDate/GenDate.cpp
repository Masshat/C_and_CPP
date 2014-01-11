// �~����������ODate�]��@����)�^

#include <sstream>
#include "GenDate.h"
using namespace std;

//--- �H�r��Ǧ^ ---//
string GenDate::to_string() const
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
ostream& operator<<(ostream& s, const GenDate& x)
{
	return s << x.to_string();
}
