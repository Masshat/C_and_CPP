//  �Ȧ�b�����O (��6���G�ϥνd��)

#include <iostream>
#include "Date.h"
#include "Account.h"
using namespace std;

int main()
{
	// ���ߥ��ͪ��b��
	Account adachi("���ߩ��@", "12345678", 1000, Date(2005, 1, 10));
	string dw[] = {"��", "�@", "�G", "�T", "�|", "��", "��"};

	cout << "���ߥ��ͪ��b��\n";
	cout << "�b��W��" << adachi.GetName() << '\n';
	cout << "�b����" << adachi.GetNo() << '\n';
	cout << "�s�ھl�B��" << adachi.CheckBalance() << "��\n";
	cout << "�}����" << adachi.OpeningDate();
	cout << "�]" << dw[adachi.OpeningDate().DayOfWeek()] << "�^\n";

	return 0;
}
