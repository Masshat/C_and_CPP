// �O�����OCounter�]�Ģ����^���ϥνd��

#include <iostream>
#include "Counter.h"
using namespace std;

int main()
{
	int no;
	Counter x;

	cout << "�W�[�����ơG";  cin >> no;
	for (int i = 0; i < no; i++) {
		x.Increment();					// �W�[����
		cout << x.Value() << '\n';
	}

	cout << "��֪����ơG";  cin >> no;
	for (int i = 0; i < no; i++) {
		x.Decrement();					// ��֦���
		cout << x.Value() << '\n';
	}

	return 0;
}
