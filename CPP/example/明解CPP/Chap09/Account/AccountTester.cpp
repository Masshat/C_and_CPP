//  �Ȧ�b�����O (��4��)���ϥνd��

#include <string>
#include <iostream>
#include "Account.h"
using namespace std;

int main()
{
	Account* adachi = new Account("���ߩ��@", "12345678", 1000);
	Account* nakata = new Account("��Яu�G", "87654321",  200);

	adachi->Withdraw(200);		// ���ߥ��ͻ�F200��
	nakata->Deposit(100);		// ��Х��ͦs�F100��

	cout << "�����ߥ��ͪ��b��G\"" << adachi->GetName() << "\" ("
		 << adachi->GetNo() << ") " << adachi->CheckBalance() << "��\n";

	cout << "����Х��ͪ��b��G\"" << nakata->GetName() << "\" ("
		 << nakata->GetNo() << ") " << nakata->CheckBalance() << "��\n";

	return 0;
}
