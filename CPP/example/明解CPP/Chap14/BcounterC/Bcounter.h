// ���ưO�����OBcounter

#if !defined(___Class_Bcounter)
	#define	 ___Class_Bcounter

#include "Counter.h"

class Bcounter : private Counter {

public:
	Bcounter() { }					// �غc�l

	Counter::Value;					// �s���ŧi

	void Increment() {				// ���W �K ���s�w�q
		if (Value() < UINT_MAX - 1) {
			Counter::Increment();
			Counter::Increment();
		}
	}
};

#endif
