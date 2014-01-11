// ���L�����OBoolean

#if !defined(___Class_Boolean)
	#define  ___Class_Boolean

#include <iostream>
using namespace std;

//===== ���L�����O =====//
class Boolean {
public:
	enum boolean {False, True};			// False������True���u

private:
	boolean x;		                	// ���L��

public:
	Boolean() : x(False) { }					// ��
	Boolean(int val) : x((val == 0) ? False : True) { }

	operator int() const    { return x; }		// �ഫ��� int(op)
	operator const char*()	{ return x == False ? "False" : "True"; }
};

inline ostream& operator<<(ostream& s, Boolean& x)
{
	return s << (const char*)x;
}

#endif
