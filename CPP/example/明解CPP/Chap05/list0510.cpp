// ��ܥk�U���������������T���� (��ƪ�)

#include <iostream>
using namespace std;

//--- �s�����n�Ӧr��c ---//
void put_nchar(char c, int n)
{
	while (n-- > 0)
		cout << c;
}

int main()
{
	int n;

	cout << "��ܥk�U���������������T���ΡC\n";
	cout << "�h�ơG";
	cin >> n;

	for (int i = 1; i <= n; i++) {
		put_nchar(' ', n - i);		// ���n �V i��' '
		put_nchar('+', i);			// ���i��'+'
		cout << '\n';
	}

	return 0;
}
