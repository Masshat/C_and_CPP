// ��ư}�C���OIntArray�]��5���G��@�����^

#include "IntArray.h"

int IntArray::counter = 0;

//--- �W�[���� ---//
void IntArray::CountUp()
{
	counter++;
}

//--- ��֦��� ---//
void IntArray::CountDown()
{
	counter--;
}

//--- �Ǧ^���� ---//
int IntArray::GetCount()
{
	return counter;
}

//--- �ƻs�غc�l ---//
IntArray::IntArray(const IntArray& x)
{
	size = x.size;				// �N�����Ƴ]���Px�ۦP����
	vec = new int[size];				// �T�O�}�C�D��
	for (int i = 0; i < size; i++)		// �ƻs�Ҧ�����
		vec[i] = x.vec[i];
	CountUp();
}

//--- ���w�B��l ---//
IntArray& IntArray::operator=(const IntArray& x)
{
	if (&x != this) {				// �p�G���O���w�ۤv�������ܡK
		delete[] vec;				// �ѩ�쥻�T�O���O����ϰ�
		size = x.size;				// �s��������
		vec = new int[size];			// �T�O�s���O����ϰ�
		for (int i = 0; i < size; i++)	// �ƻs�Ҧ�����
			vec[i] = x.vec[i];
	}
	return *this;
}
