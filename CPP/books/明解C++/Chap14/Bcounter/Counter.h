// �O�����OCounter�]�Ģ����^

#if !defined(___Class_Counter)
	#define  ___Class_Counter

#include <climits>
using namespace std;

//===== �O�����O =====//
class Counter {
	unsigned cnt;					// �O��

public:
	Counter() : cnt(0) { }			// �غc�l

	void Increment() { if (cnt < UINT_MAX) cnt++; }		// ���ƼW�[
	void Decrement() { if (cnt > 0) cnt--; }		// ���ƴ��
	unsigned Value() { return cnt; }			// �Ǧ^����
};

#endif
