// ���bool���A����

#include <iostream>
using namespace std;

int main()
{
	cout << true << ' ' << false << '\n';

	cout << boolalpha;				// �H�^��r���Φ���X���L�ȃt
	cout << true << ' ' << false << '\n';

	cout << noboolalpha;			// �H�ƭȧΦ���X���L��
	cout << true << ' ' << false << '\n';

	return 0;
}
