// �լd�O�_���|�~

#include <iostream>
using namespace std;

int main()
{
	int y;

	cout << "��J�~�G";
	cin >> y;

	cout << "�Ӧ~";
	if (y % 4 == 0 and y % 100 != 0
				   or  y % 400 == 0)
		cout << "�O�|�~�C\n";
	else
		cout << "���O�|�~�C\n";

	return 0;
}
