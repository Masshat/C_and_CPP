// ���Ъ��� (��}�B��l�M�����ѷӹB��l)

#include <iostream>
using namespace std;

int main()
{
	int x = 135;
	cout << "x   �G" <<  x << '\n';
	cout << "&x  �G" << &x << "��}\n";

	int* ptr = &x;		// ptr���Vx
	cout << "ptr �G" <<	 ptr << "��}\n";
	cout << "*ptr�G" << *ptr << '\n';

	return 0;
}
