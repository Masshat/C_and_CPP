// �q����ƭȭ˼Ʀ�0���� (��2��)

#include <iostream>
using namespace std;

int main ()
{
	int x;

	cout << "�}�l�˼ơC\n";
	do {
		cout << "����ƭȡG";
		cin >> x;
	} while (x <= 0);

	while (x >= 0)
		cout << x-- << "\n";	// ���x���Ȩû���

	return 0;
}
