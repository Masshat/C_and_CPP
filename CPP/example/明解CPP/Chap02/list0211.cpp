// �D������ܨ�Ӿ�ƭȤ��������p�ȩM���j��

#include <iostream>
using namespace std;

int main()
{
	int a, b;

	cout << "���a�G";   cin >> a;
	cout << "���b�G";   cin >> b;

	int min, max;		// ���p�� / ���j��

	if (a < b) {		// �Ya��b�p����
		min = a;
		max = b;
	} else {			// �_�h����
		min = b;
		max = a;
	}

	cout << "���p�ȬO" << min << "�C\n";
	cout << "���j�ȬO" << max << "�C\n";

	return 0;
}
