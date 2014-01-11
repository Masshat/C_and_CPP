// ���| ���O�d��

#if !defined(___Class_Stack)
	#define  ___Class_Stack

//===== ���| ���O�d�� =====//
template<class Type> class Stack {
	int size;			// ���|���e�q
	int	ptr;			// ���|����
	Type* stk;			// ���|���D��]���V�}�Y���������С^

	Stack(const Stack&);			// ���ƻs�غc�l�L��
	Stack& operator=(const Stack&);	// �����w�B��l�L��

public:
	// ���T���غc�l
	explicit Stack(int sz) : size(sz), ptr(0) { stk = new Type[size]; }
   ~Stack() { delete[] stk; }						// �Ѻc�l

	//----- ���w�����|�����J���ҥ~ -----//
	class OverflowErr {
		Stack* ident;
	public:
		OverflowErr(Stack* p) : ident(p) { }
		Stack* vec() { return ident; }
	};

	Type& Push(const Type& x) {				// ���J
		if (ptr >= size)					// ���|�w��
			throw OverflowErr(this);
		return stk[ptr++] = x;
	}

	//----- ���Ӧ۪Ű��|���u�X���ҥ~ -----//
	class EmptyErr {
		Stack* ident;
	public:
		EmptyErr(Stack* p) : ident(p) { }
		Stack* vec() { return ident; }
	};
		
	Type& Pop() {                       // �u�X
		if (ptr <= 0)					// ���|�O�Ū�
			throw EmptyErr(this);
		return stk[--ptr];
	}
};

#endif
