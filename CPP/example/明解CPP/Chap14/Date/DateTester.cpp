// �~����������ODate���ϥνd��

#include <iostream>
#include "Date.h"
using namespace std;

int main()
{
	int y, m, d;
	cout << "�п�J�ͤ�C\n";
	cout << "�~�G";	  cin >> y;
	cout << "��G";	  cin >> m;
	cout << "��G";	  cin >> d;
	Date birthday(y, m, d);
	cout << "�Ӥ鬰" << birthday << '\n';
	cout << "�Ӧ~" 
		 << (birthday.IsLeap() ? "�O�|�~�C\n" : "���O�|�~�C\n"); 

	Date today;						// ���Ѫ����
	cout << "���ѬO" << today.Year()  << "�~"
					 << today.Month() << "��"
					 << today.Day()	  << "��C\n";
	Date meiji( Date::Meiji,  1,  9,  8);	// ���v���Ĥ@��
	Date taisho(Date::Taisho, 1,  7, 30);	// �j�����Ĥ@��
	Date showa( Date::Showa,  1, 12, 25);	// �L�M���Ĥ@��
	Date heisei(Date::Heisei, 1,  1,  8);	// �������Ĥ@��

	cout << "�H�r���ܩ��v���Ĥ@�ѡG\"" << meiji.to_string()  << "\"\n";
	cout << "�H�r���ܤj�����Ĥ@�ѡG\"" << taisho.to_string() << "\"\n";
	cout << "�H�r���ܬL�M���Ĥ@�ѡG\"" << showa.to_string()  << "\"\n";
	cout << "�H�r���ܥ������Ĥ@�ѡG\"" << heisei.to_string() << "\"\n";

	return 0;
}
