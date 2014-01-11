// �O�����OCounter (��2��)

#if !defined(___Class_Counter)
	#define  ___Class_Counter

#include <climits>
using namespace std;

//===== �O�����O =====//
class Counter {
	unsigned cnt;					// �O��

public:
	Counter() : cnt(0) { }				// �غc�l

	operator unsigned() { return cnt; }		// �ഫ��� unsigned(op)

	bool operator!() { return cnt == 0; }	// �޿�_�w�B��l !op

	Counter& operator++() {				// �e�m���W�B��l ++op
		if (cnt < UINT_MAX) cnt++;
		return *this;
	}

	Counter operator++(int) {			// ��m���W�B��l op++
		Counter x = *this;
		if (cnt < UINT_MAX) cnt++;
		return x;
	}

	Counter& operator--() {				// �e�m����B��l --op
		if (cnt > 0) cnt--;
		return *this;
	}

	Counter operator--(int) {			// ��m����B��l op--
		Counter x = *this;
		if (cnt > 0) cnt--;
		return x;
	}
};

#endif
