// ��ư}�C���OIntArray�]��5���G���������^

#if !defined(___Class_IntArray)
	#define  ___Class_IntArray

class IntArray {
	static int counter;			// �o�����O���A������@�@�s�b�X�өO
	static void CountUp();		// �W�[����
	static void CountDown();	// ��֦���

	int size;			// �}�C��������
	int* vec;			// ���V�}�Y����������

public:
	//----- ���޽d����~ -----//
	class IdxRngErr {
		IntArray* ident;
		int	index;
	public:
		IdxRngErr(IntArray* p, int i) : ident(p), index(i) { }
		int Index() { return index; }
	};

	static int GetCount();			            // �Ǧ^����

	// ���T���غc�l
	explicit IntArray(int sz) : size(sz) { vec = new int[size]; CountUp(); }
	IntArray(const IntArray& x);				// �ƻs�غc�l
   ~IntArray() { delete[] vec;  CountDown(); }  // �Ѻc�l

	int Size() { return size; }					// �Ǧ^������
	IntArray& operator=(const IntArray& x);		// ���w�B��l

	int& operator[](int i) {					// ���޹B��l
		if (i < 0 || i >= size)
			throw IdxRngErr(this, i);			// �e�X���޽d�򪺿��~
		return vec[i];
	}
};

#endif
