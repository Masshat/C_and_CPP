// �e�X�P�����ҥ~

#include <new>
#include <iostream>
using namespace std;

//=== �������O ===//
class OverFlow { };

//--- �Ǧ^x��2������ ---//
int f(int x)
{
	if (x < 0)
		throw "�_�ǡA�ȳ��M�ܦ��t�ƤF�C\n";
	else if (x > 30000)
		throw OverFlow();
	else
		return 2 * x;
}

int main()
{
	int a;
	cout << "��ơG";
	cin >> a;

	try {
		int b = f(a);
		cout << "�Ӽƪ�2����" << b << "�C\n";
	}
	catch (const char* str) {		// �����r�ꪺ�ҥ~
		cout << "�o�ͨҥ~�G" << str;
	}
	catch (OverFlow) {				// �b�o�̮�����FOverFlow���A���ҥ~
		cout << "�o�ͷ���F�A�{�������C\n";
		return 1;
	}
	return 0;
}
