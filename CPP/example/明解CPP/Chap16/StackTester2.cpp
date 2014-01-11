// ���|��H���O�d��Stack���ϥνd�ҡ]��2�^

#include <iostream>
#include "Stack.h"
using namespace std;

//--- �u�X�Ҧ���ƨ���� ---//
void PopAll(Stack<int>& s)
{
	try {
		while (1)
			cout << s.Pop() << '\n';
	} catch (Stack<int>::EmptyErr) {
		return;
	}
}

int main()
{
	VecStack<int>  x;		// �V�q�����|
	ListStack<int> y;		// �u�βM�檩���|

	x.Push(10);
	x.Push(11);
	x.Push(12);
	x.Push(13);

	y.Push(20);
	y.Push(21);
	y.Push(22);

	cout << "���|x\n";
	PopAll(x);

	cout << "���|y\n";
	PopAll(y);

	return 0;
}
