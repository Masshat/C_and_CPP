// ��ܾ�ƫ��A�ү��{���ƭ�

#include <limits>
#include <iostream>
using namespace std;

int main()
{
	cout << "���B�z������ƫ��A�ү��{���ȡC\n";

	cout << "char      �G"
					  << int(numeric_limits<char>::min()) << "��" 
					  << int(numeric_limits<char>::max()) << '\n';
	cout << "signed char�G"
					  << int(numeric_limits<signed char>::min()) << "��" 
					  << int(numeric_limits<signed char>::max()) << '\n';
	cout << "unsigned char�G"
					  << int(numeric_limits<unsigned char>::min()) << "��" 
					  << int(numeric_limits<unsigned char>::max()) << '\n';

	cout << "short int�G" << numeric_limits<short>::min() << "��" 
					  << numeric_limits<short>::max() << '\n';
	cout << "int     �G" << numeric_limits<int>::min()   << "��" 
					  << numeric_limits<int>::max()   << '\n';
	cout << "long int �G" << numeric_limits<long>::min()  << "��" 
					  << numeric_limits<long>::max()  << '\n';

	cout << "unsigned short int�G"
					  << numeric_limits<unsigned short>::min() << "��" 
					  << numeric_limits<unsigned short>::max() << '\n';
	cout << "unsigned int   �G"
					  << numeric_limits<unsigned>::min() << "��" 
					  << numeric_limits<unsigned>::max() << '\n';
	cout << "unsigned long int �G"
					  << numeric_limits<unsigned long>::min() << "��" 
					  << numeric_limits<unsigned long>::max() << '\n';
	return 0;
}
