// ��ư}�C���OIntArray�]�Ģ����^���ϥνd��

#include <iostream>
#include "IntArray.h"
using namespace std;

int main()
{
	int n;

	cout << "�п�J�����ơG";
	cin >> n;

	IntArray x(n);	// �����Ƭ�n���}�C

	for (int i = 0; i < x.Size(); i++)	// �N�ȫ��w���U����
		x[i] = i;

	for (int i = 0; i < x.Size(); i++)	// ��ܦU��������
		cout << "x[" << i << "] = " << x[i] << '\n';

	return 0;
}
