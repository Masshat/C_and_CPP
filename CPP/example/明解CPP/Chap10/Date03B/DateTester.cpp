// �ϥΫ��V������ƪ����ШӰʺA�I�s���

#include <iostream>
#include "Date.h"
using namespace std;

int main()
{
	typedef int (Date::*pcomp)(int) const;
	pcomp fcomp[] = {&Date::CompY, &Date::CompM, &Date::CompD};
	int	  menu;
	const Date birthday(1963, 11, 18);

	cout << "�вq�q�ݧڪ��ͤ�C\n";
	do {
		cout << "0�K�~/1�K��/2�K��/3�K�����G";
		cin >> menu;

		if (menu >= 0 && menu <= 2) {
			int value;
			cout << "�O�h�֩O�G";
			cin >> value;

			int diff = (birthday.*fcomp[menu])(value);
			if (!diff)
				cout << "���T���סC\n";
			else if (diff > 0)
				cout << "�h�F" <<  diff << "�C\n";
			else
				cout << "�֤F" << -diff << "�C\n";
		}
	  } while (menu != 3);

	return 0;
}
