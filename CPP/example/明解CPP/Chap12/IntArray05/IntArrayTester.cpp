// ��ư}�C���OIntArray�]��5���^���ϥνd��

#include <iostream>
#include "IntArray.h"
using namespace std;

int main()
{
	IntArray a(5);
	cout << "�{�b��" << IntArray::GetCount() << "�Ӱ}�C�C\n";
	{
		IntArray b(10);
		cout << "�{�b��" << IntArray::GetCount() << "�Ӱ}�C�C\n";
	}
	cout << "�{�b��" << IntArray::GetCount() << "�Ӱ}�C�C\n";

	return 0;
}
