// �H0.001�����q0.0���W��1.0����ܨ��`�M (�Hfloat�ӱ���j��)

#include <iostream>
using namespace std;

int main()
{
	float sum = 0.0;
	for (float x = 0.0; x <= 1.0; x += 0.001) {
		cout << "x = " << x << '\n';
		sum += x;
	}
	cout << "sum = " << sum << '\n';

	return 0;
}
