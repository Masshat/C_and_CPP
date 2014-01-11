// �~�Ӫ��d���u���M�����OPetList�]��@�����^

#include <iostream>
#include "Petlist.h"
using namespace std;

//--- �غc�l ---//
PetList::PetList()
{
	top = dummy = new PetNode(NULL, NULL);		// �إ߰��`�I
}

//--- �Ѻc�l ---//
PetList::~PetList()
{
	Clear();
	delete top;					// ���񰲸`�I
}

//--- �j�M���ݪ��`�I ---//
PetNode* PetList::Bottom()
{
	if (top == dummy)					// �M�欰�ť�
		return NULL;
	PetNode* ptr = top;					// ��찲�`�I����
	while (ptr->next != dummy)				// ���X�Ҧ��`�I
		ptr = ptr->next;
	return ptr;
}

//--- �N�`�I����e�� ---//
PetList& PetList::AddFirst(Pet* x)
{
	PetNode* ptr = top;					// ���J���e���e�ݸ`�I
	top = new PetNode(x, ptr);
	return *this;
}

//--- �N�`�I������� ---//
PetList& PetList::AddLast(Pet* x)
{
	if (top == dummy)					// �Y�M�欰�ťժ���
		AddFirst(x);				// �HAddFirst�Ӵ���e��
	else {
		PetNode* ptr = Bottom();
		ptr->next = new PetNode(x, dummy);
	}
	return *this;
}

//--- �R���e�ݪ��`�I ---//
PetList& PetList::RemoveFirst()
{
	if (top != dummy) {
		PetNode* ptr = top->next;			// �e����_����2�Ӹ`�I
		delete top;
		top = ptr;
	}
	return *this;
}

//--- �R�����ݸ`�I -----//
PetList& PetList::RemoveLast()
{
	if (top == dummy)					// �Y�M�欰�ťժ���
		;									
	else if (top->next == dummy)			                // �p�G�`�I���O�u���@��
		RemoveFirst();				// �N�HRemoveFirst�R���e�ݸ`�I
	else {
		PetNode* ptr = top;				// �ثe�`�I
		PetNode* pre;				// �ثe�`�I���U�@�Ӹ`�I
		while (ptr->next != dummy) {
			pre = ptr;
			ptr = ptr->next;
		}
		pre->next = dummy;			// pre�O�R���᪺���ݸ`�I
		delete ptr;
	}
	return *this;
}

//--- �R���Ҧ��`�I ---//
PetList& PetList::Clear()
{
	PetNode* ptr = top;
	while (ptr != dummy) {
		PetNode* next = ptr->next;
		delete ptr;
		ptr = next;
	}
	top = dummy;
	return *this;
}

//--- �������ۧڤ��� ---//
PetList& PetList::Introduce()
{
	PetNode* ptr = top;
	cout << "<<---------------- �ۧڤ��� ---------------->>\n";
	while (ptr != dummy) {
		ptr->pet->Sintro();
		ptr = ptr->next;
	}
	cout << "<<------------------------------------------>>\n";
	return *this;
}

//--- ���J�B��l ---//
ostream& operator<<(ostream& s, const PetList& x)
{
	PetNode* ptr = x.top;
	s << "{\n";
	while (ptr != x.dummy) {
		s << '\t' << *(Pet*)(*ptr) << '\n';
		ptr = ptr->Next();
	}
	s << "}\n";
	return s;
}
