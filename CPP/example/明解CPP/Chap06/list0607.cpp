// �D���̰����H�������P�̭D���H���魫

#include <iostream>
using namespace std;

//--- �Ǧ^������n���}�Ca���̤j�� ---//
int maxof(const int a[], int n)
{
	int max = a[0];
	for (int i = 1; i < n; i++)
		if (a[i] > max)
			max = a[i];
	return max;
}

int main()
{
	const int ninzu = 5;				// �H��
	int height[ninzu], weight[ninzu];	// �����B�魫

	cout << "�п�J" << ninzu << "�ӤH�������M�魫�C\n";
	for (int i = 0; i < ninzu; i++) {
		cout << i + 1 << "���������G";
		cin >> height[i];
		cout << i + 1 << "�����魫�G";
		cin >> weight[i];
	}
	int hmax = maxof(height, ninzu);	// �������̤j��
	int wmax = maxof(weight, ninzu);	// �魫���̤j��

	cout << "�̰����H�������G" << hmax << "cm\n";
	cout << "�̭D���H���魫�G" << wmax << "kg\n";

	return 0;
}
