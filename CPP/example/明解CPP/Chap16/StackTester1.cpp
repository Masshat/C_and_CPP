// ���|��H���O�d��Stack���ϥνd�ҡ]�䢰�^

#include <iostream>
#include "Stack.h"
using namespace std;

int main()
{
	Stack<int>* s = new VecStack<int>;

	while (1) {
		int menu;
		cout << "(1)���J  (2)�u�X�@(0)�����G";
		cin >> menu;
		if (menu == 0) break;

		switch (menu) {
		 int x;
		 case 1: cout << "��ơG";
				 cin >> x;
				 s->Push(x);
				 break;

		 case 2: try {
					x = s->Pop();
				 	cout << "�u�X����Ƭ�" << x << "�C\n"; 
				 }
				 catch (Stack<int>::EmptyErr) {
					cout << "\a���|���Ū��C\n";
				 }
				 break;
		 }
	}

	return 0;
}
