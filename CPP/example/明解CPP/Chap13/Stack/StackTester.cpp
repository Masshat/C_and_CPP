// ���| ���O�d��Stack���ϥνd�ҡ]����r��^

#include <string>
#include <iostream>
#include "Stack.h"
using namespace std;

int main()
{
	string x;

	cout << "�r��G";
	cin >> x;

	Stack<char> s(x.length());		// ���|s���e�q���r��x������

	try {
		for (int i = 0; i < x.length(); i++) // �q�}�Y��r�}�l�̧Ǳ��J
			s.Push(x[i]);

		for (int i = 0; i < x.length(); i++)  {
			char c = s.Pop();	           	 // �u�X�]�i�H�f�V�o��^
			cout << c;
		}
		cout << '\n';
	}
	catch (Stack<char>::OverflowErr x) {
		cout << "\a�Q�n��w����<char>���|[" << x.vec()
			 << "]�i����J�C\n";
	}
	catch (Stack<char>::EmptyErr x) {
		cout << "\a�Q�n�q�Ū�<char>���|[" << x.vec()
			 << "]�i��u�X�C\n";
	}

	return 0;
}
