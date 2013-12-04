// ��H���|���O

#if !defined(___Class_Stack)
#define ___Class_Stack

#include <vector>
#include <cstdlib>
using namespace std;

//===== ��H���|���O =====//
template <class Type> class Stack {
public:
	class EmptyErr { };				          // �ҥ~�G���|���Ū�

	virtual ~Stack() { }				      // �����Ѻc�l
	virtual void Push(const Type) = 0;		  // ���J
	virtual Type Pop() = 0;				      // �u�X
};

//===== �V�q�����|���O =====//
template <class Type> class VecStack : public Stack<Type> {
	vector<Type> stk;				          // �V�q

	VecStack(const VecStack&);			      // ���ƻs�غc�l�L�Ĥ�
	VecStack& operator=(const VecStack&);	  // �����w�B��l�L�Ĥ�

public:
	VecStack() { }					// �غc�l

	~VecStack() { }					// �Ѻc�l

	void Push(const Type x) {			// ���J
		stk.push_back(x);				// ���J�����
	}

	Type Pop() {						// �u�X
		if (stk.size() <= 0)
			throw EmptyErr();			// ���|���Ū�
		Type x = stk.back();			// �լd���ݪ���
		stk.pop_back();					// �R�����ݤ���
		return x;
	}
};

//===== �u�βM�檩���|���O =====//
template <class Type> class ListStack : public Stack<Type> {

	template <class Type> class Node {
		friend class ListStack<Type>;
		Type* data;		// ���
		Node* next;		// ������� (���V����`�I������)
	public:
		Node(Type* d, Node* n) : data(d), next(n) { }
	};

	Node<Type>* top;				// ���V�e�ݸ`�I������
	Node<Type>* dummy;				// ���V���`�I������

	ListStack(const ListStack&);			// ���ƻs�غc�l�L�Ĥ�
	ListStack& operator=(const ListStack&); // �����w�B��l�L�Ĥ�

public:
	ListStack() {						// �غc�l
		top = dummy = new Node<Type>(NULL, NULL);
	}

	~ListStack() {						// �Ѻc�l
		Node<Type>* ptr = top;
		while (ptr != dummy) {
			Node<Type>* next = ptr->next;
			delete ptr->data;
			delete ptr;
			ptr = next;
		}
		delete dummy;
	}

	void Push(const Type x) {		     // ���J
		Node<Type>* ptr = top;
		top = new Node<Type>(new Type(x), ptr);
	}

	Type Pop() {						// �u�X
		if (top == dummy)
			throw EmptyErr();			// ���|���Ū�
		else {
			Node<Type>* ptr = top->next;
			Type temp = *(top->data);
			delete top->data;
			delete top;
			top = ptr;
			return temp;
		}
	}
};

#endif
