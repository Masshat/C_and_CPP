//  �Ȧ�b�����O (��5���G�ϥνd��)

#include <iostream>
#include "Account.h"
using namespace std;

int main()
{
	Account adachi("���ߩ��@", "12345678", 1000, 2005, 1, 10); // ���ߥ��ͪ��b��
	Account nakata("��Яu�G", "87654321",  200, 2004, 7, 15); // ��Х��ͪ��b��

	adachi.Withdraw(200);	// ���ߥ��ͻ�F200��
	nakata.Deposit(100);	// ��Х��ͦs�F100��

	cout << "���ߥ��ͪ��b��\n";
	cout << "�b��W��" << adachi.GetName() << '\n';
	cout << "�b����" << adachi.GetNo() << '\n';
	cout << "�s�ھl�B��" << adachi.CheckBalance() << "��\n";
	cout << "�}����" << adachi.OpeningDate() << '\n';

	cout << "\n��Х��ͪ��b��\n";
	cout << "�b��W��" << nakata.GetName() << '\n';
	cout << "�b����" << nakata.GetNo() << '\n';
	cout << "�s�ھl�B��" << nakata.CheckBalance() << "��\n";
	cout << "�}����" << nakata.OpeningDate().Year()  << "�~"
						 << nakata.OpeningDate().Month() << "��"
						 << nakata.OpeningDate().Day()   << "��\n";

	return 0;
}
