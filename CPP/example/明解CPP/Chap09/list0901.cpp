// �Ȧ�b��

#include <string>
#include <iostream>
using namespace std;

int main()
{
	string adachi_account_name = "���ߩ��@";	// ���ߥ��ͪ��b��W
	string adachi_account_no = "12345678";		// �@���@���b��
	long  adachi_account_balance = 1000;		// �@���@���s�ھl�B

	string nakata_account_name = "��Яu�G";	// ��Х��ͪ��b��W
	string nakata_account_no = "87654321";		// �@���@���b��
	long  nakata_account_balance = 200;			// �@���@���s�ھl�B

	adachi_account_balance -= 200;				// ���ߥ��ͻ�F200��
	nakata_account_balance += 100;				// ��Х��ͦs�F100��

	cout << "�����ߥ��ͪ��b��G\"" << adachi_account_name << "\" ("
		 << adachi_account_no << ") " << adachi_account_balance << "��\n";

	cout << "����Х��ͪ��b��G\"" << nakata_account_name << "\" ("
		 << nakata_account_no << ") " << nakata_account_balance << "��\n";

	return 0;
}
