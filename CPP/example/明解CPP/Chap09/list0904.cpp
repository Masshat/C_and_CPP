//  �Ȧ�b�����O (��3���G�N��ƪ��w�q���})

#include <string>
#include <iostream>
using namespace std;

class Account {
	string name;			// �b��W
	string no;				// �b��
	long balance;			// �s�ھl�B

public:
	Account(string n, string num, long z);		// �غc�l
	string GetName();							// �d�߱b��W
	string GetNo();							// �d�߱b��
	long CheckBalance();						// �d�ߦs�ھl�B
	void Deposit(long k);						// �s��
	void Withdraw(long k);						// ����
};

//--- �غc�l ---//
Account::Account(string n, string num, long z)
{
	name = n;			// �b��W
	no = num;			// �b��
	balance = z;		// �s�ھl�B
}

//--- �d�߱b��W ---//
string Account::GetName()
{ return name; }

//--- �d�߱b�� ---//
string Account::GetNo()
{ return no; }

//--- �d�ߦs�ھl�B ---//
long Account::CheckBalance()
{ return balance; }

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

int main()
{
	Account adachi("���ߩ��@", "12345678", 1000);		// ���ߥ��ͪ��b��
	Account nakata("��Яu�G", "87654321",  200);		// ��Х��ͪ��b��

	adachi.Withdraw(200);			// ���ߥ��ͻ�F200��
	nakata.Deposit(100);			// ��Х��ͦs�F100��

	cout << "�����ߥ��ͪ��b��G\"" << adachi.GetName() << "\" ("
		 << adachi.GetNo() << ") " << adachi.CheckBalance() << "��\n";

	cout << "����Х��ͪ��b��G\"" << nakata.GetName() << "\" ("
		 << nakata.GetNo() << ") " << nakata.CheckBalance() << "��\n";

	return 0;
}

