// ��ܦU���ܼƩM�`�ƪ����A��T

#include <iostream>
#include <typeinfo>
using namespace std;
 
int main()
{
	char c;
	short h;
	int i;
	long l;

	cout << "�ܼ�c�����A�G" << typeid(c).name() << '\n';
	cout << "�ܼ�h�����A�G" << typeid(h).name() << '\n';
	cout << "�ܼ�i�����A�G" << typeid(i).name() << '\n';
	cout << "�ܼ�l�����A�G" << typeid(l).name() << '\n';

	cout << "�r���`��'A'�����A�G"   << typeid('A').name() << '\n';
	cout << "��Ʊ`��100�����A�G"   << typeid(100).name() << '\n';
	cout << "��Ʊ`��100U�����A�G"  << typeid(100U).name() << '\n';
	cout << "��Ʊ`��100L�����A�G"  << typeid(100L).name() << '\n';
	cout << "��Ʊ`��100UL�����A�G" << typeid(100UL).name() << '\n';

	return 0;
}
