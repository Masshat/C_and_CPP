// ��ư}�C���OIntArray�]��3���G��@�����^

#include "IntArray.h"

//--- �ƻs�غc�l ---//
IntArray::IntArray(const IntArray& x)
{
	size = x.size;			         // �N�����Ƴ]���Px�ۦP����
	vec = new int[size];			 // �T�O�}�C�D��
	for (int i = 0; i < size; i++)	 // �ƻs�Ҧ�����
		vec[i] = x.vec[i];
}

//--- ���w�B��l ---//
IntArray& IntArray::operator=(const IntArray& x)
{
	if (&x != this) {					// �p�G���O���w�ۤv�������ܡK
		delete[] vec;				    // �ѩ�쥻�T�O���O����ϰ�
		size = x.size;				    // �s��������
		vec = new int[size];			// �T�O�s���O����ϰ�
		for (int i = 0; i < size; i++)	// �ƻs�Ҧ�����
			vec[i] = x.vec[i];
	}
	return *this;
}
