// ��ܰ}�C�����A�M���������A

#include <iostream>
#include <typeinfo>
using namespace std;

int main()
{
	int a[5];
	double b[7];

	cout << "�}�Ca�����A�G" << typeid(a).name()    << '\n';
	cout << "a���������A�G" << typeid(a[0]).name() << '\n';
	cout << "�}�Cb�����A�G" << typeid(b).name()    << '\n';
	cout << "b���������A�G" << typeid(b[0]).name() << '\n';

	return 0;
}
