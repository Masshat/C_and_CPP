// �H��ƭȨӨD����Ӿ�ƭȪ�������

#include <iostream>
using namespace std;

int main()
{
	int x, y;

	cout << "�D����Ӿ�ƭ�x�My�������ȡC\n";
	cout << "x���ȡG";	cin >> x;		// Ū�J��ƭȨ�x
	cout << "y���ȡG";	cin >> y;		// Ū�J��ƭȨ�y 

	double ave = (x + y) / 2.0;				    // �H��ƨD��������
	cout << "x�My�������ȬO" << ave << "�C\n";	// ��ܥ�����

	return 0;
}
