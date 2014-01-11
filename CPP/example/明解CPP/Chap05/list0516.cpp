// ��ܵL�Ÿ���ƪ��޿�n�B�޿�M�B�޿�t (�������޿�M)�B1���ɼ�

#include <iostream>
using namespace std;

//--- �D�����x����"1 "���줸�� ---//
int count_bits(unsigned x)
{
	int bits = 0;
	while (x) {
		if (x & 1U) bits++;
		x >>= 1;
	}
	return bits;
}

//--- �D��unsigned���A���줸�� ---//
int int_bits()
{
	return count_bits(~0U);
}

//--- ���unsigned���A���줸���c ---//
void print_bits(unsigned x)
{
	for (int i = int_bits() - 1; i >= 0; i--)
		cout << ((x >> i) & 1U) ? '1' : '0';
}

int main()
{
	unsigned a, b;

	cout << "��J��ӫD�t�ƪ���ơC\n";
	cout << "a�G";	  cin >> a;
	cout << "b�G";	  cin >> b;

	cout << "a   �@= ";  print_bits(a);		cout << '\n';
	cout << "b   �@= ";  print_bits(b);		cout << '\n';
	cout << "a & b = ";  print_bits(a & b);	cout << '\n';	//�޿�n
	cout << "a | b = ";  print_bits(a | b);	cout << '\n';	//�޿�M
	cout << "a ^ b = ";  print_bits(a ^ b);	cout << '\n';	//�޿�t
	cout << "~a�@  = ";  print_bits(~a);	cout << '\n';	//1���ɼ� 
	cout << "~b�@  = ";  print_bits(~b);	cout << '\n';	//1���ɼ�

	return 0;
}
