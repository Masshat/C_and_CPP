//  �Ȧ�b�����O (��4���G��������)

#include <string>
using namespace std;

class Account {
	string name;			// �b��W
	string no;				// �b��
	long balance;			// �s�ھl�B

public:
	Account(string n, string num, long z);		// �غc�l

	string GetName()    { return name; }		// �d�߱b��W
	string GetNo()      { return no; }			// �d�߱b��
	long CheckBalance() { return balance; }		// �d�ߦs�ھl�B

	void Deposit(long k);						// �s��
	void Withdraw(long k);						// ����
};
