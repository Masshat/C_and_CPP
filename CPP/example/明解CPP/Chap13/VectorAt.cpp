// �s���V�q������

#include <vector>
#include <iostream>
using namespace std;

int main()
{
	int a[] = {1, 2, 3, 4, 5};
	vector<int> x(a, a + 5);	// �q�}�C���s�@�V�q

	try {
		for (int i = 0; i <= 10; i++) {
			cout << "x[" << i << "] = " << x.at(i) << '\n';
		}
	}
	catch (std::out_of_range){
		cout << "�o�O�����T�����ޡC\n";
		return 1;						// �j���
	}

	return 0;
}
