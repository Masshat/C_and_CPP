// vector�������ƻP�e�q

#include <vector>
#include <iostream>
using namespace std;

int main()
{
	vector<int> x;
	cout << "�e�q�G" << x.capacity() << '\n';
	x.reserve(7);		// �Ϯe�q�̤֤]��7

	x.push_back(15);	x.push_back(92);
	x.push_back(75);	x.push_back(48);

	cout << "�e�q�G" << x.capacity() << '\n';

	for (int i = 0; i < x.size(); i++)
		cout << "x[" << i << "] = " << x[i] << '\n';

	return 0;
}
