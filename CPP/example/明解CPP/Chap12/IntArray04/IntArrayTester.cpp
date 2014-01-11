// ��ư}�C���OIntArray�]��4���^���ϥνd��

#include <new>
#include <iomanip>
#include <iostream>
#include "IntArray.h"
using namespace std;

//--- �Nnum�Ӹ�ƫ��w�������Ƭ�size���}�C����� --//
void f(int size, int num)
{
	try {
		IntArray x(size);
		for (int i = 0; i < num; i++) {
			x[i] = i;
			cout << "x[" << i << "] = " << x[i] << '\n';
		}
	}
	catch (IntArray::IdxRngErr& x) {
		cout << "���޷���G" << x.Index() << '\n';
		return;
	}
	catch (bad_alloc) {
		cout << "�T�O�O���饢�ѡC\n";
		exit(1);			               // �j���
	}
}

int main()
{
	int size, num;

	cout << "�����ơG"; cin >> size;
	cout << "��ƼơG"; cin >> num;

	f(size, num);

	return 0;
}
