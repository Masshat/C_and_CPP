// �~����������OGenDate���ϥνd��

#include <iostream>
#include "Date.h"
#include "GenDate.h"
using namespace std;

int main()
{
	int y, m, d;
	cout << "�п�J�ͤ�C\n";
	cout << "�~�G";	  cin >> y;
	cout << "��G";	  cin >> m;
	cout << "��G";	  cin >> d;
	GenDate birthday(y, m, d);
	cout << "�~���G" << birthday.to_string()       << '\n';
	cout << "�褸�G" << birthday.Date::to_string() << '\n';
	cout << "�Ӧ~" 
		 << (birthday.IsLeap() ? "�O�|�~�C\n" : "���O�|�~�C\n"); 

	GenDate today;						// ���Ѫ����
	cout << "���ѬO" << today.Year()  << "�~"
					 << today.Month() << "��"
					 << today.Day()	  << "��C\n";
	GenDate meiji( GenDate::Meiji,  1,  9,  8);		// ���v���Ĥ@��
	GenDate taisho(GenDate::Taisho, 1,  7, 30);		// �j�����Ĥ@��
	GenDate showa( GenDate::Showa,  1, 12, 25);		// �L�M���Ĥ@��
	GenDate heisei(GenDate::Heisei, 1,  1,  8);		// �������Ĥ@��

	cout << "�H�r��Ǧ^���v���Ĥ@�ѡG\"" << meiji.to_string()  << "\"\n";
	cout << "�H�r��Ǧ^�j�����Ĥ@�ѡG\"" << taisho.to_string() << "\"\n";
	cout << "�H�r��Ǧ^�L�M���Ĥ@�ѡG\"" << showa.to_string()  << "\"\n";
	cout << "�H�r��Ǧ^�������Ĥ@�ѡG\"" << heisei.to_string() << "\"\n";

	return 0;
}
