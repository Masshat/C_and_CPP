//  �D����Ȥ��̤j�Ȫ���ƽd��

#include <cstring>
#include <iostream>
using namespace std;

//--- �D��a, b�����j�@�誺�� ---//	 
template <class Type> Type maxof(Type a, Type b)
{
	return a > b ? a : b;
}

//--- �D��a, b�����j�@�誺�� ( const char*���A���S��� )
template <> const char* maxof<const char*>(const char* a, const char* b)
{
	return strcmp(a, b) > 0 ? a : b;
}

int main()
{
	int a, b;
	double x;
	char s[100], t[100];

	cout << "���a�G";	  cin >> a;
	cout << "���b�G";	  cin >> b;
	cout << "���x�G";	  cin >> x;
	cout << "�r��s�G";            cin >> s;
	cout << "�r��t�G";             cin >> t;

	cout << "a�Pb�����j�@�誺�Ȭ�" << maxof(a, b)              << "�C\n";
	cout << "a�Px�����j�@�誺�Ȭ�" << maxof<double>(a, x)      << "�C\n";
	cout << "s�Pt�����j�@�誺�Ȭ�" << maxof<const char*>(s, t) << "�C\n";

	return 0;
}
