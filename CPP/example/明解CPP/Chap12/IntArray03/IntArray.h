// ��ư}�C���OIntArray�]��3���G���������^

#if !defined(___Class_IntArray)
#define ___Class_IntArray

//===== ��ư}�C���O ======//
class IntArray {
	int	size;		// �}�C��������
	int* vec;		                // ���V�}�Y����������

public:
	// ���T���غc�l
	explicit IntArray(int sz) : size(sz) { vec = new int[size]; }
	IntArray(const IntArray& x);					// �ƻs�غc�l
   ~IntArray() { delete[] vec; }					// �Ѻc�l
	int Size() { return size; }						// �Ǧ^������
	IntArray& operator=(const IntArray& x);			// ���w�B��l=
	int& operator[](int i) { return vec[i]; }		// ���޹B��l[]
};

#endif
