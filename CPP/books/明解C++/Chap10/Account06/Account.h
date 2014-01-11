//  �Ȧ�b�����O (��6���G��������)

#if !defined(___Class_Account)
	#define	 ___Class_Account

#include <string>
#include "Date.h"
using namespace std;

//===== �Ȧ�b�����O =====//
class Account {
	string name;			// �b��W
	string no;				// �b��
	long balance;			// �s�ڪ��B
	Date open;			// �}���

public:
	// �غc�l
	Account(string n, string num, long z, Date op);

	void Deposit(long k);						// �s��
	void Withdraw(long k);						// ����
	string GetName() const    { return name; }		// �d�߱b��W
	string GetNo() const      { return no; }		                // �d�߱b��
	long CheckBalance()	const { return balance; }	// �d�ߦs�ھl�B
	Date OpeningDate() const  { return open; }		// �d�߶}���
};

#endif
