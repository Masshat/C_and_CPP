// ��ư}�C���OIntArray�]��2���^

#if !defined(___Class_IntArray)
    #define  ___Class_IntArray

//===== ��ư}�C���O ======//
class IntArray {
	int size;		// �}�C��������
	int* vec;		// ���V�}�Y����������

public:
	// ���T���غc�l
	explicit IntArray(int sz) : size(sz) { vec = new int[size]; }
   ~IntArray() { delete[] vec; }				// �Ѻc�l
	int Size() { return size; }					// �Ǧ^������
	int& operator[](int i) { return vec[i]; }	// ���޹B��l[]
};

#endif
