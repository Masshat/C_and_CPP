// ��ư}�C���OIntArray�]��3���^���ϥνd��

#include <iomanip>
#include <iostream>
#include "IntArray.h"
using namespace std;

int main()
{
	int n;
	cout << "a�������ơG";
	cin >> n;

	IntArray a(n);				// �����Ƭ�n��
	for (int i = 0; i < a.Size(); i++)
		a[i] = i;

	IntArray b(1000);
	cout << "b�������Ʊq" << b.Size();
	b = a;						// ���w
	cout << "�ܦ�" << b.Size() << "�F�C\n";

	IntArray c = b;				// ��l��

	cout << "    a    b    c\n";
	cout << "---------------\n";
	for (int i = 0; i < n; i++)
		cout << setw(5) << a[i] << setw(5) << b[i] << setw(5) << c[i] << '\n';

	return 0;
}
