// ���� ->��ƪ����A�ഫ

#include <iostream>
using namespace std;

int main()
{
	int n;
	cout << "n����}�G" << hex << reinterpret_cast<unsigned long>(&n) << '\n';
	return 0;
}
