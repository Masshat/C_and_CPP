// �q�Ʀr�C�� (�q0~99)

#include <ctime>
#include <cstdlib>
#include <iostream>
using namespace std;

int main ()
{
	srand (time (NULL));		// �]�w�üƪ��ؤl
	int no = rand () % 100;		// �n�q���Ʀr�G����0��99���ü�
	int x;
	cout << "�q�Ʀr�C���}�l!!\n";
	cout << "�вq0~99���Ʀr�C\n";

	do {
		cout << "���ӼƦr�G";
		cin >> x;
		if (x > no)
			cout << "\a�O��p���Ʀr��C\n";
		else if (x < no)
			cout << "\a�O��j���Ʀr��C\n";
	} while (x != no);
	cout << "���T���סC\n";

	return 0;
}
