// ��ܥ��U���������������T���� (��ƪ�)

#include <iostream>
using namespace std;

//--- �s�����n��'*'�r�� ---//
void put_stars(int n)
{
	while (n-- > 0)
		cout << '*';
}

int main()
{
	int n;

	cout << "��ܥ��U���������������T���ΡC\n";
	cout << "�h�ơG";
	cin >> n;

	for (int i = 1; i <= n; i++) {
		put_stars(i);
		cout << '\n';
	}

	return 0;
}
