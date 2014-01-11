// ������ODate�]�[�W������ƩI�s���ƪ��p��^

#include <iostream>
using namespace std;

class Date {
	int	year;			// �褸�~
	int	month;			// ��
	int	day;			// ��
	mutable int count;	// ������ƳQ�I�s�X�Ӫ��`�p����

public:
	Date(int y, int m, int d) {				// �غc�l
		year = y; month = m; day = d; count = 0;
	}
	int Year()  const { count++; return year; }			// �Ǧ^�~
	int Month() const { count++; return month; }		// �Ǧ^��
	int Day()	const { count++; return day; }			// �Ǧ^��
	int Count()	const { return count; }			// �O��
};

int main()
{
	const Date birthday(1963, 11, 18);		// �ͤ�

	cout << "birthday = " << birthday.Year()  << "�~"
						  << birthday.Month() << "��"
						  << birthday.Day()	  << "��\n";
	cout << "birthday��������Ƥ@�@�Q�I�s�F" << birthday.Count() << 
			"���C\n";

	return 0;
}
