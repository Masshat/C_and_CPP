// ��ܱN�L�Ÿ���ƫ��A���k�첾���᪺��

#include <iostream>
using namespace std;

int count_bits(unsigned x){
    int bits = 0;
	while (x) {
		if (x & 1U) bits++;
		x >>= 1;
	}
	return bits;
 }

int int_bits(){
	return count_bits(~0U);
}

void print_bits(unsigned x){
	for (int i = int_bits() - 1; i >= 0; i--)
		cout << ((x >> i) & 1U) ? '1' : '0';
}

int main()
{
	unsigned x, n;

	cout << "�D�t�ƪ���ơG";			cin >> x;
	cout << "�첾���줸�ơG";	cin >> n;

	cout << "��ơ@ = ";  print_bits(x);		 cout << '\n';
	cout << "���첾 = ";  print_bits(x << n);	 cout << '\n';
	cout << "�k�첾 = ";  print_bits(x >> n);	 cout << '\n';

	return 0;
}
