// �W�٪Ŷ��Pusing �ŧi

#include <iostream>
using namespace std;

namespace English {

	int x = 1;

	void hello()
	{
		cout << "Hello!\n";
	}
}

namespace Japanese {
 
	int x = 2;

	void hello()
	{
		cout << "���w�I\n";
	} 
}

int main()
{
	using Japanese::hello;

	cout << "English::x = " << English::x << '\n';
	cout << "Japanese::x = " << Japanese::x << '\n';

	English::hello();
	hello();				// ���ݭnJapanese::

	return 0;
}

