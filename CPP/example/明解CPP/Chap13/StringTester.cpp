// string���ϥνd��

#include <string>
#include <cstring>
#include <iostream>
using namespace std;

int main()
{
	string s1 = "ABC";
	string s2 = "HIJKLMN";
	string digits = "0123456789";
	string x1, x2;
	char p[12];

	s1 += "DEF";		// �bs1���[�J"DEF"
	s1 += 'G';			// �bs1���[�J'G'		
	s1 += s2;			// �bs1���[�J"HIJKLMN"	
	s1.insert(6, digits.substr(5, 3));		// �bs1[6]�����J"567"

	s2.replace(3, 2, "kl");	// �Ns2[3]��s2[4]�ഫ��"kl"
	s2.erase(6);			// �Ns2[6]�R��

	strcpy(p, digits.c_str());	// �Ndigits�ഫ���Ѧr��ýƻs

	cout << "s1 = ";
	for (int i = 0; i < s1.length(); i++)
		cout << s1[i];
	cout << '\n';

	cout << "s2 = " << s2 << '\n';

	cout << "p = " << p << '\n';

	cout << "�r��x1 = ";  cin >> x1;
	cout << "�r��x2 = ";  cin >> x2;

	string::size_type d = x1.find(x2);		// �qx1���M��x2
	cout << "�r��x1����" << 
				((d == string::npos) ? "�S���]�tx2�C\n" : "�]�t�Fx2�C\n");

	return 0;
}
