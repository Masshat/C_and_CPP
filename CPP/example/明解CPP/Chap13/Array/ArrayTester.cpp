// �}�C���O�d��Array���ϥνd��

#include <new>
#include <iomanip>
#include <iostream>
#include "Array.h"
using namespace std;

int main()
{
	try {
		int no;
		Array<int>	  x(5);		// �������A��int�B�����Ƭ�5
		Array<double> y(8);		// �������A��double�B�����Ƭ�8

		cout << "��ƼơG";
		cin >> no;

		for (int i = 0; i < no; i++) {
			x[i] = i;
			y[i] = 0.1 * i;
			cout << "x[" << i << "] = " << x[i] << "   "
				 << "y[" << i << "] = " << y[i] << '\n';
		}
	}
	catch (bad_alloc) {
		cout << "�O���骺�T�O���ѤF�C\n";
		return 1;					         // �j���
	}
	catch (Array<int>::IdxRngErr x) {
		cout << "���޷��� Array<int>�G" << x.Index() << '\n';
		return 1;
	}
	catch (Array<double>::IdxRngErr x) {
		cout << "���޷��� Array<double>�G" << x.Index() << '\n';
		return 1;
	}

	return 0;
}
