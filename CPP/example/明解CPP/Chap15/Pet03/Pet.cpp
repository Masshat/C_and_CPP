// �d�����OPet�]��2���G��@�����^

#include <string>
#include <iostream>
#include "Pet.h"
using namespace std;

//--- Pet::����X��y�����J�B��l ---//
ostream& operator<<(ostream& s, const Pet& p)
{
	return s << "{ " << p.Name() << " }";
}

//--- Pdog::����X��y�����J�B��l ---//
ostream& operator<<(ostream& s, const Pdog& p)
{
	return s << "{ ��, " << p.Name() << ", [" << p.Type() << "] }";
}

//--- Pcat::����X��y�����J�B��l ---//
ostream& operator<<(ostream& s, const Pcat& p)
{
	return s << "{ ��, " << p.Name() << " }";
}

//--- Pmonkey::����X��y�����J�B��l ---//
ostream& operator<<(ostream& s, const Pmonkey& p)
{
	return s << "{ �U, " << p.Name() << ", " << p.Age() << "�� }";
}
