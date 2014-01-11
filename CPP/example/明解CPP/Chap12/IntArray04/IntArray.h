// ��ư}�C���OIntArray�]��4���G���������^

#if !defined(___Class_IntArray)
	#define  ___Class_IntArray

//===== ��ư}�C���O ======//
class IntArray {
	int size;		// �}�C��������
	int* vec;		// ���V�}�Y����������

public:
	//----- ���޽d����~ -----//
	class IdxRngErr {
	private:
		IntArray* ident;
		int	index;
	public:
		IdxRngErr(IntArray* p, int i) : ident(p), index(i) { }
		int Index() { return index; }
	};

	// ���T���غc�l
	explicit IntArray(int sz) : size(sz) { vec = new int[size]; }
	IntArray(const IntArray& x);			// �ƻs�غc�l
   ~IntArray() { delete[] vec; }			// �Ѻc�l

	int Size() { return size; }				// �Ǧ^������
	IntArray& operator=(const IntArray& x);	// ���w�B��l=

	int& operator[](int i) { 				// ���޹B��l[]
		if (i < 0 || i >= size)
			throw IdxRngErr(this, i);		// �e�X���޽d�򪺿��~
		return vec[i];
	}
};

#endif
