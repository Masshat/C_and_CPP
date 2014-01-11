// ���double���A���S��

#include <limits>
#include <iostream>
using namespace std;

int main()
{
	cout << "�̤p�ȡG" << numeric_limits<double>::min() << '\n';
	cout << "�̤j�ȡG" << numeric_limits<double>::max() << '\n';
	cout << "���Ƴ����G" << numeric_limits<double>::radix  << "�i��ƬO"
					   << numeric_limits<double>::digits << "���\n";
	cout << "��ơG" << numeric_limits<double>::digits10 << '\n';
	cout << "����`�G" << numeric_limits<double>::epsilon()<< '\n';
	cout << "�̤j���˥h�~�t" << numeric_limits<double>::round_error() << '\n';
	cout << "�˥h�Φ��G";
		switch (numeric_limits<double>::round_style) {
		 case round_indeterminate:
							cout << "�L�k�M�w�C\n"; break;
		 case round_toward_zero:
							cout << "�ͪ��0�˥h�C\n"; break;
		 case round_to_nearest:
							cout << "�H�i��{���̱���ȱ˥h�C\n"; break;
		 case round_toward_infinity:
							cout << "�ͪ��L���j�˥h�C\n"; break;
		 case round_toward_neg_infinity:
							cout << "�ͪ��t���L���j�˥h�C\n"; break;
		}

	return 0;
}
