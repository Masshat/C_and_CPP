// �P�_��¦r�����A�O���Ÿ��٬O�L�Ÿ�

#include <limits>
#include <iostream>
using namespace std;

int main()
{
	cout << "���B�z������¦r�����A�O"
		 <<	(numeric_limits<char>::is_signed ? "���Ÿ�" : "�L�Ÿ�")
		 <<	"�r�����A�C\n";

	return 0;
}
