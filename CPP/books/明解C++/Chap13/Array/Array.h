// �}�C���O�d��Array

#if !defined(___Class_Array)
	#define  ___Class_Array

//===== �}�C���O�d�� =====//
template <class Type> class Array {
	int	size;		// �}�C��������
	Type* vec;		// ���V�}�Y����������

public:
	//----- ���޽d����~ -----//
	class IdxRngErr {
		Array* ident;
		int index;
	public:
		IdxRngErr(Array* p, int i) : ident(p), index(i) { }
		int Index() { return index; }
	};

	// ���T���غc�l
	explicit Array(int sz) : size(sz) { vec = new Type[size]; }

	// �ƻs�غc�l
	Array(const Array& x) {
		vec = new Type[x.size];	    // �N�����Ƴ]���Px�ۦP����
		size = x.size;				// �T�O�}�C�D��
		for (int i = 0; i < size; i++)		 // �ƻsx���Ҧ�����
			vec[i] = x.vec[i];
	}

	// �Ѻc�l
   ~Array() { delete[] vec; }

	// �Ǧ^������
	int Size() { return size; }

	// ���w�B��l=
	Array& operator=(const Array& x) {
		if (&x != this) {			// �p�G���O���w�ۤv�������ܡK
			delete[] vec;			// �ѩ�쥻�T�O���O����ϰ�
			size = x.size;			// �s��������
			vec = new Type[size];		// �T�O�s���O����ϰ�
			for (int i = 0; i < size; i++)	// �ƻs�Ҧ�����
				vec[i] = x.vec[i];
		}
		return *this;
	}

	// ���޹B��l[]
	Type& operator[](int i)	{
		if (i < 0 || i >= size)
			throw IdxRngErr(this, i);		// �e�X���޽d����~
		return vec[i];
	}
};

#endif
