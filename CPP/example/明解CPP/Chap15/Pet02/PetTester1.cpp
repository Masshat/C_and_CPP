// �d�����OPet�]��2���^���ϥνd�ҡA��@

#include <iostream>
#include "Pet.h"
using namespace std;

int main()
{
	Pdog spank("Spank", "���");	// ���]����^
	Pcat michael("Michael");		// ��
	Pmonkey jiro("Jiro", 7);		// �U�]���^

	cout << "�d������ơG\n";		// �@����]���J�B��l�^
	cout << spank << '\n';
	cout << michael << '\n';
	cout << jiro << '\n';

	cout << "\n���j�a�@�ۧڤ��СC\n";		// �ۧڤ��С]Sintro�^
	spank.Sintro();
	michael.Sintro();
	jiro.Sintro();

	return 0;
}
