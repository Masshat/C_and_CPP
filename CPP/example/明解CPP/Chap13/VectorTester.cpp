// vector���ϥνd�ҡ]Ū�������D���Ƽƪ���ơ^

#include <vector>
#include <iostream>
using namespace std;

int main()
{
	vector<int> x;

	cout << "�п�J��ơC\n��������9999�C\n";

	while (true) {
		int temp;
		cin >> temp;
		if (temp == 9999) break;
		x.push_back(temp);
	}

	for (int i = 0; i < x.size(); i++)
		cout << "x[" << i << "] = " << x[i] << '\n';

	return 0;
}
