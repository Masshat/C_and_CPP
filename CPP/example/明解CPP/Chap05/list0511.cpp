// �o�Xĵ�i����� (�w�]�޼�)

#include <iostream>
using namespace std;

//--- �o�Xn����ĵ�i ---//
void alerts(int n = 3)
{
	for (int i = 0; i < n; i++)
		cout << '\a';
}

int main()
{
	alerts();
	cout << "ĵ�i�I\n";

	alerts(5);
	cout << "�A��ĵ�i�I\n";

	return 0;
}
