// ��ܲ{�b������B�ɶ�

#include <ctime>
#include <iostream>
using namespace std;

int main()
{
	time_t current = time(NULL);				// �{�b���зǮɶ�
	struct tm *timer = localtime(&current);		// �U�������ɶ��]�a��ɶ��^
	char *wday_name[] = {"��", "�@", "�G", "�T", "�|", "��", "��"};

	cout << "�{�b������B�ɶ���"
		 << timer->tm_year + 1900     << "�~"
		 << timer->tm_mon + 1         << "��"
		 << timer->tm_mday            << "��]"
		 << wday_name[timer->tm_wday] << "�^"
		 << timer->tm_hour            << "�I"
		 << timer->tm_min             << "��"
		 << timer->tm_sec             << "��C\n";

	return 0;
}
