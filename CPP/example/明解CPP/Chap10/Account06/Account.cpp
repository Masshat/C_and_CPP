//  �Ȧ�b�����O (��6���G��@����)

#include <string>
#include <iostream>
#include "Account.h"
using namespace std;

//--- �غc�l ---//
Account::Account(string n, string num, long z, Date op) : 
		name(n), no(num), balance(z), open(op)
{
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
