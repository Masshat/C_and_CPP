// �N�r�ꤤ���p�g�r���ഫ���j�g�r�������

#include <cctype>
#include <iostream>
using namespace std;

//--- ��ܦr��s (�N�p�g�r���ഫ���j�g�r��)---//
void put_upper(const char s[])
{
	int i = 0;
	while (s[i] != 0)
		cout << char(toupper(s[i++]));
}

int main()
{
	char str[40];

	cout << "�r��G";
	cin >> str;

	put_upper(str);

	return 0;
}
