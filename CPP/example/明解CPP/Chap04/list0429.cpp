// ��ܩҿ�ܤ��ʪ����s�n

#include <iostream>
using namespace std;

int main()
{
	enum animal { Dog, Cat, Monkey, Invalid };

	int type;
	do {
		cout << "0�K�� 1�K�� 2�K�U 3�K�����G";
		cin >> type;
	} while (type < Dog	|| type > Invalid);

	if (type != Invalid) {
		animal selected = animal(type);
		switch (selected) {
		 case Dog	 : cout << "�L�L!!\n";	break;
		 case Cat	 : cout << "�p�p!!\n";	break;
		 case Monkey : cout << "�s�s!!\n";	break;
		}
	}

	return 0;
}
