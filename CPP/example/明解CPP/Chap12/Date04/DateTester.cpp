// ������ODate�]��4��)���ϥνd��

#include <iostream>
#include "Date.h"
using namespace std;

int main()
{
	int y, m, d;
	cout << "�褸�~�G";
	cin >> y;
	cout << "�Ӧ~"
		 << (Date::IsLeap(y) ? "�O�|�~�C\n" : "���O�|�~�C\n"); 

	cout << "�п�J�ͤ�C\n";
	cout << "�~�G";	  cin >> y;
	cout << "��G";	  cin >> m;
	cout << "��G";	  cin >> d;
	Date birthday(y, m, d);
	cout << birthday.Year() << "�~" 
		 << (birthday.IsLeap() ? "�O�|�~�C\n" : "���O�|�~�C\n"); 

	return 0;
}
