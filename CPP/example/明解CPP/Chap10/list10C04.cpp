// �q�r�ꤤ���X

#include <sstream>
#include <iostream>
using namespace std;

int main()
{
	string s = "2005/11/18";
	istringstream is(s);
	int y, m, d;
	char ch;
	is >> y >> ch >> m >> ch >> d;
	cout << y << "�~" << m << "��" << d << "��\n";
	return 0;
}
