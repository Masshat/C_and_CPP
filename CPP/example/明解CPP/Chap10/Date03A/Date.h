// ������ODate�]��3��A�G��������)

#if !defined(___Class_Date)
	#define	 ___Class_Date

#include <string>
#include <iostream>
using namespace std;

//===== ������O =====//
class Date {
	int	year;		// �褸�~
	int	month;		// ��
	int	day;		// ��

public:
	Date();				                	// �w�]�غc�l
	Date(int y, int m = 1, int d = 1);		// �غc�l

	int Year()	const { return this->year; }    // �Ǧ^�~
	int Month()	const { return this->month; }	// �Ǧ^��
	int Day()	const { return this->day; }		// �Ǧ^��
	int DayOfWeek() const;				     	// �Ǧ^�P�� 
	string to_string() const;					// �H�r��Ǧ^
};

ostream& operator<<(ostream& s, const Date& x);		// ���J�B��l

#endif
