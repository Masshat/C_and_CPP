// �~�Ӫ��d���u���M�����OPetList�]���������^

#if !defined(___Class_PetList)
	#define	 ___Class_PetList

#include <iostream>
#include "Pet.h"
using namespace std;

//===== �d���`�I���O =====//
class PetNode {
	friend class PetList;

	Pet*	 pet;			// ���
	PetNode* next;			// ������С]���V����`�I�����С^

public:
	PetNode(Pet* p, PetNode* n = NULL) : pet(p), next(n) { } // �غc�l
   ~PetNode()		{ delete pet; }		// �Ѻc�l

	PetNode* Next()	{ return next; }	// ����`�I
	operator Pet*()	{ return pet;  }	// �ഫ���
};

//===== �d���u���M�����O�]PetNode��friend���O�^ =====//
class PetList {
	friend ostream& operator<<(ostream& s, const PetList& x);

	PetNode* top;			// ���V�e�ݸ`�I������
	PetNode* dummy;			// ���V���`�I������

	PetList(const PetList&);			// ���ƻs�غc�l�L�Ĥ�
	PetList& operator=(const PetList&);	// �����w�B��l�L�Ĥ�

public:
	PetList();					// �غc�l
                ~PetList();				// �Ѻc�l

	PetNode* Top() { return (top == dummy) ? NULL : top; }	// �e�ݸ`�I
	PetNode* Bottom();					// ���ݸ`�I

	PetList& AddFirst(Pet*);		// �N�`�I����e��
	PetList& AddLast(Pet*);			// �N�`�I�������
	PetList& RemoveFirst();			// �R���e�ݸ`�I
	PetList& RemoveLast();			// �R�����ݸ`�I
	PetList& Clear();				// �R���Ҧ��`�I

	PetList& Introduce();			// �ۧڤ���
};

ostream& operator<<(ostream&, const PetList&);

#endif
