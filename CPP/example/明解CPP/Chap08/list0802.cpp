// �D�o�}�C���̤j��(�ϥΦh��)

#include <iostream>
using namespace std;

//--- �Ǧ^�����Ƭ�n���}�Cx���̤j��(int���A) ---//
int maxof(const int x[], int n)
{
	int max = x[0];
	for (int i = 1; i < n; i++)
		if (x[i] > max)
			max = x[i];
	return max;
}

//--- �Ǧ^�����Ƭ�n���}�Cx���̤j��(double���A) ---//
double maxof(const double x[], int n)
{
	double max = x[0];
	for (int i = 1; i < n; i++)
		if (x[i] > max)
			max = x[i];
	return max;
}

int main()
{
	const int isize = 8;
	int ix[isize];

	// ��ư}�C���̤j��
	cout <<"�п�J"<< isize << "�Ӿ�ơC\n";
	for (int i = 0; i < isize; i++) {
		cout << i + 1 << ":";
		cin >> ix[i];
	}
	cout << "�̤j�Ȭ�" << maxof(ix, isize) << "�C\n\n";

	const int dsize = 5;
	double dx[dsize];

	// ��ư}�C���̤j��
	cout <<"�п�J"<< dsize << "�ӹ�ơC\n";

	for (int i = 0; i < dsize; i++) {
		cout << i + 1 << ":";
		cin >> dx[i];
	}
	cout << "�̤j�Ȭ�" << maxof(dx, dsize) << "�C\n";

	return 0;
}
