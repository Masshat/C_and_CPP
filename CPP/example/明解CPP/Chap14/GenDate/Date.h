// ������ODate�]���������^

#if !defined(___Class_Date)
	#define	 ___Class_Date

#include <string>
#include <iostream>
using namespace std;

//===== ������O =====//
class Date {
protected:
	int year;			// �褸�~
	int month;		// ��
	int day;			// ��

public:
	Date();				// �w�]�غc�l
	Date(int y, int m = 1, int d = 1) :	// �غc�l
			year(y), month(m), day(d) { }
	// y�~�O�|�~�ܡH
	static bool IsLeap(int y) { return y % 4 == 0 && y % 100 != 0 || y % 400 == 0; }
	int Year()	const { return year; }		// �Ǧ^�~
	int Month() const { return month; }		// �Ǧ^��
	int Day()	const { return day; }		// �Ǧ^��
	int DayOfWeek() const;					// �Ǧ^�P��
	bool IsLeap() const { return IsLeap(year); }		// �O�|�~�ܡH
	string to_string() const;			// �H�r��Ǧ^
};

ostream& operator<<(ostream& s, const Date& x);		  // ���J�B��l

#endif
