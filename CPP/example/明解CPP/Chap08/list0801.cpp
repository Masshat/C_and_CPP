// �ϥλ��j�ӨD�o����

#include <iostream>
using namespace std;

//--- �H���j�����c�ӨDn������ ---//
int factorial(int n)
{
	if (n > 0)
		return n * factorial(n - 1);
	else
		return 1;
}

int main()
{
	int x;

	cout << "��ƭ�:";
	cin >> x;

	cout << x << "��������" << factorial(x) << "�C\n";

	return 0;
}

