// ���ƼW�[�������OBcounter���ϥνd��

#include <iostream>
#include "Bcounter.h"
using namespace std;

int main()
{
	int n;
	Bcounter cnt;

	cout << "�W�[�F�h�֦��O�G";
	cin >> n;
	for (int i = 0; i < n; i++) {
		cnt.Increment();
		cout << cnt.Value() << ' ';
	}
	cout << '\n';

	return 0;
}
