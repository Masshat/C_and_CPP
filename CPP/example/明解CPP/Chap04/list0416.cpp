//�H0.001�����q0.0���W��1.0����ܨ��`�M (�Hint�ӱ���j��)

#include <iostream>
using namespace std;

int main()
{
	float sum = 0.0;
	for (int i = 0; i <= 1000; i++) {
		float x = float(i) / 1000;
		cout << "x = " << x << '\n';
		sum += x;
	}
	cout << "sum = " << sum << '\n';

	return 0;
}
