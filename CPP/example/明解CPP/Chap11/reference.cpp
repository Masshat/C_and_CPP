// �ѷӪ���

#include <iostream>
using namespace std;

int main()
{
	double	   d = 1.0;		// d�Odouble���A�]�Ȭ�1.0�^
	const int& p = d;		// p�ѷ�double���A
	const int& q = 5;		// q�ѷӱ`��

	const_cast<int&>(p) = 3.14;	// 3.14�����w�ؼЬOint�٬Odouble

	cout << "d = " << d << '\n';
	cout << "p = " << p << '\n';
	cout << "q = " << q << '\n';

	return 0;
}
