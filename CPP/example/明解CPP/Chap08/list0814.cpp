// �W�٪Ŷ�

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
	cout << "English::x = " << English::x << '\n';
	cout << "Japanese::x = " << Japanese::x << '\n';

	English::hello();
	Japanese::hello();

	return 0;
}
