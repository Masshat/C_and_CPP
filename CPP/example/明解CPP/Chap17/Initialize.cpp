// ���������O�P�D���������O����l��

#include <iostream>
using namespace std;

class V1 {
public:
	V1() { cout << "�NV1��l��\n"; }
};

class V2 {
public:
	V2() { cout << "�NV2��l��\n"; }
};

class X : public virtual V1, public virtual V2 {
public:
	X() { cout << "�N���l��\n"; }
};

class Y : public virtual V2, public virtual V1 {
public:
	Y() { cout << "�N���l��\n"; }
};

class Z : public X, public Y {
public:
	Z() { cout << "�N���l��\n"; }
};

int main()
{
	Z dummy;

	return 0;
}
