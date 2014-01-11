// �ϥ�dynamic_cast�B��l�ӦV�U�૬���d��

#include <iostream>
#include "Pet.h"
using namespace std;

//--- �u���p���@�ۧڤ��� ---//
void dog_intro(Pet* p)
{
	Pdog* d = dynamic_cast<Pdog*>(p);

	if (d)				// �u�b�૬���\���ɭ�
		d->Sintro();		// �ۧڤ���
}

int main()
{
	Pet* p1 = new Pdog("Spank", "���");			// ��
	Pet* p2 = new Pcat("Michael");			// ��

	dog_intro(p1);
	dog_intro(p2);

	delete p1;
	delete p2;

	return 0;
}