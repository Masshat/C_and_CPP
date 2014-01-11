// �~�Ӫ��d���u���M�����OPetList���ϥνd��

#include <iostream>
#include "PetList.h"
using namespace std;

enum Menu {
	Terminate, AddFirst, AddLast, DspFirst, DspLast, RmvFist, RmvLast, Clear,
	Print, Intro, MenuOver
};

//--- ��J��� ---//
Pet* Read()
{
	int    kind;		// ����
	Pet* ptr;			// �d��

	do {
		cout << "�����i0�K����1�K�ߡ�2�K�U�j�G";
		cin >> kind;
	} while (kind < 0 || kind > 2);
	switch (kind) {
	 case 0 : ptr = new Pdog();		break;		// ���ͪ�
	 case 1 : ptr = new Pcat();		break;		// ���Ϳ� 
	 case 2 : ptr = new Pmonkey();	break;		// ���͵U
	}
	ptr->Input();			// Ū�����
	return ptr;
}

//--- ��ܿ�� ---//
Menu SelectMenu()
{
	int ch;

	do {
		cout << "(1) ���J�ܫe��  (2) ���J�ܧ���  "
			 << "(3) ��ܫe��  (4) ��ܧ���\n";
		cout << "(5) �R���e��    (6) �R������    "
			 << "(7) �R������  (8) ��ܥ���\n";
		cout << "(9) �ۧڤ��С@  (0) �����G";
		cin >> ch;
	} while (ch < Terminate || ch >= MenuOver);
	return Menu(ch);
}

int main()
{
	Menu	menu;
	PetList	list;

	do {
		menu = SelectMenu();
		switch (menu) {
		 PetNode* p;
		 case AddFirst: {				               // �N�`�I���J��e��
				cout << "�п�J�n���J��e�ݪ���ơC\n";
				Pet* x = Read();
				list.AddFirst(x);
			         } break;

		 case AddLast: {			                   // �N�`�I���J�����
				cout << "�п�J�n���J����ݪ���ơC\n";
				Pet* x = Read();
				list.AddLast(x);
			         } break;

		 case DspFirst: if (p = list.Top())		        	// ��ܫe�ݪ��`�I
				((Pet*)*p)->Sintro(); break;

		 case DspLast: if (p = list.Bottom())		        // ��ܧ��ݪ��`�I
				((Pet*)*p)->Sintro(); break;

		 case RmvFist: list.RemoveFirst(); break;	        // �R���e�ݸ`�I

		 case RmvLast: list.RemoveLast(); break;		    // �R�����ݸ`�I

		 case Clear: list.Clear();  break;		            // �R���Ҧ��`�I

		 case Print	: cout << list;  break;			        // ��X�Ҧ����

		 case Intro: list.Introduce(); break;		        // �ۧڤ���
		}
	} while (menu != Terminate);

	return 0;
}
