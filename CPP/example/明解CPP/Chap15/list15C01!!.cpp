class A {
public:
	void f() { / *�K* / }
};

class B : public A {
public:
	virtual void f() { / *�K* / }	                // �������
};

class C : public B {
public:
	void f()	{ / *�K* / }		// �������
	void f(int)	{ / *�K* / }	// �h���]overload�^
};
