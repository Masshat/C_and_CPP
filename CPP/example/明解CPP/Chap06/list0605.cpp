// �Q�Ψ�ƨӨD����Ӿ�ƭȪ��`�M�P���n

#include <iostream>
using namespace std;

//---�D��x�My���`�M�ë��w��*sum�A�ӭ��n�h���w��*mul ---//
void sum_mul(int x, int y, int* sum, int* mul)
{
	*sum = x + y;
	*mul = x * y;
}

int main()
{
	int a, b;
	int wa = 0, seki = 0;

	cout << "���a�G";   cin >> a;
	cout << "���b�G";   cin >> b;

	sum_mul(a, b, &wa, &seki);

	cout << "�`�M�O" << wa << "�C\n";
	cout << "���n�O" << seki << "�C\n";

	return 0;
}
