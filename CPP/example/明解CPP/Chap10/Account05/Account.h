//  �Ȧ�b�����O (��5���G��������)

#include <string>
#include "Date.h"
using namespace std;

class Account {
	string name;			// �b��W
	string no;				// �b��
	long balance;			// �s�ھl�B
	Date open;				// �}���

public:
	// �غc�l
	Account(string n, string num, long z, int y, int m, int d);

	void Deposit(long k);							// �s��
	void Withdraw(long k);							// ����

	string GetName() const    { return name; }		// �d�߱b��W
	string GetNo() const      { return no; }		// �d�߱b��
	long CheckBalance()	const { return balance; }	// �d�ߦs�ھl�B
	Date OpeningDate() const  { return open; }		// �d�߶}���
};
