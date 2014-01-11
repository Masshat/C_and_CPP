// �~����������ODate�]���������^

#if !defined(___Class_GenDate)
	#define	 ___Class_GenDate

#include <string>
#include <iostream>
#include "Date.h"
using namespace std;

//===== �~����������O =====//
class GenDate : public Date {
public:
	enum Gengou {Meiji, Taisho, Showa, Heisei};

	GenDate() { }
	GenDate(int y, int m = 1, int d = 1) : Date(y, m, d) { }
	GenDate(Gengou g, int y, int m = 1, int d = 1) : Date(y, m, d)
	{
		switch (g) {
		 case Meiji	 : year += 1867;  break;	// ���v
		 case Taisho : year += 1911;  break;	// �j��
		 case Showa	 : year += 1925;  break;	// �L�M
		 case Heisei : year += 1988;  break;	// ����
		}
	}
	string to_string() const;				// �H�r��Ǧ^
};

ostream& operator<<(ostream& s, const GenDate& x);		  // ���J�B��l

#endif
