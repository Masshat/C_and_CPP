// �Ƽ����OComplex���ϥνd��

#include <iostream>
#include "Complex.h"
using namespace std;

int main()
{
	double re, im;

	cout << "a���ꪺ�����G";  cin >> re;
	cout << "a���ꪺ�����G";  cin >> im;
	Complex a(re, im);

	cout << "b���ꪺ�����G";  cin >> re;
	cout << "b���ꪺ�����G";  cin >> im;
	Complex b(re, im);

	Complex c = -a + b;

	b += 2.0;			          	// �bb�[�W(2.0, 0.0)
	c -= Complex(1.0, 1.0);	      	// �qc��h(1.0, 1.0)
	Complex d(b.Imag(), c.Real());	// �Nd�@��(b���ꪺ����, c���ꪺ����)

	cout << "a = " << a << '\n';
	cout << "b = " << b << '\n';
	cout << "c = " << c << '\n';
	cout << "d = " << d << '\n';

	return 0;
}
