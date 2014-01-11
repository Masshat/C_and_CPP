// �d�����OPet�]�Ģ����G��@�����^

#include <string>
#include <iostream>
#include "Pet.h"
using namespace std;

//--- Ū�J ---//
void Pet::Input()
{
	int k;
	do {
		cout << "�����i0�K����1�K�ߡ� 2�K�U�j�G";
		cin >> k;
	} while (k < Dog || k > Monkey);
	kind = PetType(k);
	cout << "�W�١G";
	cin >> name;
}

//--- �ۧڤ��� ---//
void Pet::Sintro() const
{
	cout << "�ڬO";
	switch (kind) {
	 case Dog :    cout << "��"; break;
	 case Cat :	   cout << "��"; break;
	 case Monkey : cout << "�U"; break;
	}
	cout << "�A�ڪ��W�r�s��" << name << "!!\n";
}

//--- ����X��y�����J�B��l ---//
ostream& operator<<(ostream& s, const Pet& p)
{
	s << "{ ";
	switch (p.Type()) {
	 case Pet::Dog    : s << "��, "; break;
	 case Pet::Cat    : s << "��, "; break;
	 case Pet::Monkey : s << "�U, "; break;
	}
	s << p.Name() << " }";
	return s;
}
