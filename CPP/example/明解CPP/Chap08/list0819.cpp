// ��ܿ�ܪ��ʪ����s�n (���V��ƪ�����) 

#include <iostream>
using namespace std; 

enum animal { Dog, Cat, Monkey, Invalid };

//--- �� ---//
void dog()
{
	cout << "�L�L!!\n";
}

//--- �� ---//
void cat()
{
	cout << "�p!!\n";
}

//--- �U ---//
void monkey()
{
	cout << "�s�s!!\n";
}

//--- main ---//
int main()
{
	typedef void (*afunc)();
	afunc fn[] = {dog, cat, monkey};
	int menu;

	do {
		do {
			cout << "0�K���@1�K�ߡ@2�K�U�@3�K�����G";
			cin >> menu;
		} while (menu < Dog	|| menu > Invalid);
		if (menu != Invalid)
			fn[menu]();
	} while (menu != Invalid);

	return 0;
}
