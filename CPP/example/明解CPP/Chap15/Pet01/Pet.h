// �d�����OPet�]�Ģ����G���������^

#if !defined(___Class_Pet)
	#define	 ___Class_Pet

#include <string>
#include <iostream>
using namespace std;

//===== �d�����O =====//
class Pet {
public:
	enum PetType {Dog, Cat, Monkey};	// �d��������

private:
	PetType kind;		// ����
	string  name;		// �W�r

public:
	// �غc�l
	Pet(PetType x = Dog, string n = "") : kind(x), name(n) { }

	PetType Type() const { return kind; }		// �Ǧ^����
	string Name()  const { return name; }		// �Ǧ^�W�r

	void Input();				// Ū�J
	void Sintro() const;		// �ۧڤ���
};

// ���J�B��l
ostream& operator<<(ostream&, const Pet&);

#endif
