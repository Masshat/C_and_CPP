//  �Ȧ�b�����O (��1��)

#include <string>
#include <iostream>
using namespace std;

class Account {
public:
	string name;			// �b��W
	string no;				// �b��
	long balance;			// �s�ھl�B
};

int main()
{
	Account adachi;				// ���ߥ��ͪ��b��
	Account nakata;				// ��Х��ͪ��b��

	adachi.name = "���ߩ��@";	// ���ߥ��ͪ��b��W
	adachi.no = "12345678";		// �@���@���b��
	adachi.balance = 1000;		// �@���@���s�ھl�B

	nakata.name = "��Яu�G";	// ��Х��ͪ��b��W
	nakata.no = "87654321";		// �@���@���b��
	nakata.balance = 200;		// �@���@���s�ھl�B

	adachi.balance -= 200;		// ���ߥ��ͻ�F200��
	nakata.balance += 100;		// ��Х��ͦs�F100��

	cout << "�����ߥ��ͪ��b��G\"" << adachi.name << "\" ("
		 << adachi.no << ") " << adachi.balance << "��\n";

	cout << "����Х��ͪ��b��G\"" << nakata.name << "\" ("
		 << nakata.no << ") " << nakata.balance << "��\n";

	return 0;
}
