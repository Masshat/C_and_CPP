// �ϥΰ}�C���r��H�ΨϥΫ��Ъ��r��

#include <iostream>
using namespace std;

int main()
{
	char a[][6] = {"S5000", "V8", "W140"};		// �ϥΰ}�C���r�ꤧ�}�C
	char* p[]   = {"12345", "A8", "abcd"};		// �ϥΫ��Ъ��r�ꤧ�}�C

	for (int i = 0; i < 3; i++)
		cout << "a[" << i << "] = \"" << a[i] << "\"\n";

	for (int i = 0; i < 3; i++)
		cout << "p[" << i << "] = \"" << p[i] << "\"\n";

	return 0;
}
