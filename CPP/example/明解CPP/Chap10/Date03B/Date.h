// ������ODate�]��3��B�G��������)

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
	Date();					// �w�]�غc�l
	Date(int y, int m = 1, int d = 1);		// �غc�l

	int Year()	const { return year; }		// �Ǧ^�~
	int Month()	const { return month; }	// �Ǧ^��
	int Day()	const { return day; }		                // �Ǧ^��
	int DayOfWeek() const;			// �Ǧ^�P�� 
	string to_string() const;			// �H�r��Ǧ^

	int CompY(int y) const { return y - year;  }	// �Ǧ^�~���t
	int CompM(int m) const { return m - month; }	// �Ǧ^�몺�t
	int CompD(int d) const { return d - day;   }	// �Ǧ^�骺�t
};

ostream& operator<<(ostream& s, const Date& x);		// ���J�l

#endif
