//  �Ȧ�b�����O (��4���G��@����)

#include <string>
#include <iostream>
#include "Account.h"
using namespace std;

//--- �غc�l ---//
Account::Account(string n, string num, long z)	
{
	name = n;			// �b��W
	no = num;			// �b��
	balance = z;		// �s�ھl�B
}

//--- �s�� ---//
void Account::Deposit(long k)
{
	balance += k;
}

//--- ���� ---//
void Account::Withdraw(long k)
{
	balance -= k;
}
