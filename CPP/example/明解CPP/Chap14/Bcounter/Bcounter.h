// ���ưO�����OBcounter

#if !defined(___Class_Bcounter)
	#define	 ___Class_Bcounter

#include "Counter.h"

//===== ���ưO�����O =====//
class Bcounter : private Counter {

public:
	Bcounter() { }					// �غc�l

	using Counter::Value;			// �վ㦨����ƪ��s���v��

	void Increment() {				// �A���w�q�������
		if (Value() < UINT_MAX - 1) {
			Counter::Increment();
			Counter::Increment();
		}
	}
};

#endif
