//  �Ȧ�b�����O (��2��)

#include <string>
#include <iostream>
using namespace std;

class Account {
private:
	string name;			// �b��W
	string no;				// �b��
	long balance;			// �s�ھl�B

public:
	Account(string n, string num, long z) {		// �غc�l
		name = n;			// �b��W
		no = num;			// �b��
		balance = z;		// �s�ھl�B
	}

	string GetName() {			// �d�߱b��W
		return name;
	}

	string GetNo() {			// �d�߱b��
		return no;
	}

	long CheckBalance() {		// �d�ߦs�ھl�B
		return balance;
	}

	void Deposit(long k) {		// �s��
		balance += k;
	}

	void Withdraw(long k) {		// ����
		balance -= k;
	}
};

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
