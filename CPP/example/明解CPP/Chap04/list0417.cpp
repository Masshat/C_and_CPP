// Ū�J���ӤH�����ƨ�����`���P����

#include <iostream>
using namespace std;

int main()
{
	int yamane, takada, kawakami, koga, tozuka, saegusa;// ����
	int sum = 0;										// �`�M

	cout << "�D�����ӤH�����Ƥ��`���P�����C\n";
	cout << "1�������ơG";   cin >> yamane;	  sum += yamane;
	cout << "2�������ơG";   cin >> takada;	  sum += takada;
	cout << "3�������ơG";   cin >> kawakami; sum += kawakami;
	cout << "4�������ơG";   cin >> koga;	  sum += koga;
	cout << "5�������ơG";   cin >> tozuka;	  sum += tozuka;
	cout << "6�������ơG";   cin >> saegusa;  sum += saegusa;

	cout << "�`���O" << sum << "���C\n";
	cout << "�����O" << double(sum) / 6 << "���C\n";

	return 0;
}
