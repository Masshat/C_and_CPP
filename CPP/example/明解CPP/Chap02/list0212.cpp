// �N����ܼƪ@���Ƨ� (�Ѥp��j)

#include <iostream>
using namespace std;

int main()
{
	int a, b;

	cout << "�ܼ�a�G";   cin >> a;
	cout << "�ܼ�b�G";   cin >> b;

	if (a > b) {		// �Ya��b�j����
		int t = a;		// �N��ӭȥ洫
		a = b;
		b = t;
	}
	cout << "�H��a �� b�ӱƧǡC\n";
	cout << "�ܼ�a�O" << a << "�C\n";
	cout << "�ܼ�b�O" << b << "�C\n";

	return 0;
}
