// ��ܦU�ؾ�ƫ��A�M�ܼƪ��j�p

#include <iostream>
using namespace std;
 
int main()
{
	char c;
	cout << "char���A���j�p�G" << sizeof(char) << '\n';
	cout << "�ܼ�c���j�p�G" << sizeof(c)    << '\n';

	short h;
	cout << "short���A���j�p�G" << sizeof(short) << '\n';
	cout << "�ܼ�h���j�p  �G" << sizeof(h)     << '\n';

	int i;
	cout << "int���A���j�p �G" << sizeof(int) << '\n';
	cout << "�ܼ�i���j�p  �G" << sizeof(i)   << '\n';

	long l;
	cout << "long���A���j�p �G" << sizeof(long) << '\n';
	cout << "�ܼ�l���j�p  �G" << sizeof(l)    << '\n';

	return 0;
}
