// �O�����OCounter (��2��)���ϥνd��

#include <iostream>
#include "Counter.h"
using namespace std;

int main()
{
	int no;
	Counter x;
	Counter y;

	cout << "�W�[�����ơG";  cin >> no;
	for (int i = 0; i < no; i++)
		cout << x++ << ' ' << ++y << '\n';	// �W�[����

	cout << "��֪����ơG";  cin >> no;
	for (int i = 0; i < no; i++)
		cout << x-- << ' ' << --y << '\n'; 	// ��֦���

	if (!x)
		cout << "x�O0�C\n";
	else 
		cout << "x���O0�C\n";

	return 0;
}
