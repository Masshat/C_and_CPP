// �d�����OPet�]��3���G���������^

#if !defined(___Class_Pet)
	#define	 ___Class_Pet

#include <string>
#include <iostream>
using namespace std;

//=== �d�����OPet ===//
class Pet {
	string name;					// �W�r

public:
	Pet(string n = "") : name(n) { }				// �غc�l

	string Name() const { return name; }			// �Ǧ^�W�r

	virtual void Input() { 				// Ū�J
		cout << "�W�r : ";	cin >> name;
	}

	virtual void Sintro() const {				// �ۧڤ���
		cout << "�ڪ��W�r�O" << name << "�C\n";
	}
};

ostream& operator<<(ostream&, const Pet&);				// ���J�B��l

//=== ���d�����OPdog ===//
class Pdog : public Pet {
	string dtype;						// �~��

public:
	Pdog(string n = "", string d = "") : Pet(n), dtype(d) { }

	string Type() const { return dtype; }				// �Ǧ^�~��	

	void Input() {						// Ū�J
		Pet::Input();
		cout << "�~�� : "; cin >> dtype;
	}

	void Sintro() const {						// �ۧڤ���
		cout << "�ڬO" << dtype << Name() << "!!\n";
	}
};

ostream& operator<<(ostream&, const Pdog&);				// ���J�B��l

//=== ���d�����OPcat ===//
class Pcat : public Pet {
public:
	Pcat(string n = "") : Pet(n) { }

	// ���w�q�������Input

	void Sintro() const {						// �ۧڤ���
		cout << "�ڪ��W�r�O" << Name() << "!!\n";
	}
};

ostream& operator<<(ostream&, const Pcat&);				// ���J�B��l

//=== �U�d�����OPmonkey ===//
class Pmonkey : public Pet {
	int age;							// �~��
public:
	Pmonkey(string n = "", int a = 0) : Pet(n), age(a) { }

	int Age() const { return age; }					// �Ǧ^�~��	

	void Input() {						// Ū�J
		Pet::Input();
		cout << "�~�� : "; cin >> age;
	}

	void Sintro() const {						// �ۧڤ���
		cout << "�ڬO" << age << "����" << Name() << "!!\n";
	}
};

ostream& operator<<(ostream&, const Pmonkey&);			// ���J�B��l

#endif
