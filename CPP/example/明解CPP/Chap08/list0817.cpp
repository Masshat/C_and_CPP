// �ХܲŦX���󪺤��� (���V��Ƥ�����)

#include <ctime>
#include <cstdlib>
#include <iostream>
using namespace std;

//--- �Ȭ�30 ~ 60 ---//
bool f(int x)
{
	return (x >= 30 && x <= 60);
}

//--- �Ȭ�10�H�W30�H�U�άO70�H�W80�H�U ---//
bool g(int x)
{
	return (x >= 10 && x <= 30) || (x >= 70 && x <= 80);
}

//--- �Хܰ}�Ca �������f(x)���u������ ---//
void ary_disp(int a[], int n, bool (*func)(int x))
{
	for (int i = 0; i < n; i++) {
		if ((*func)(a[i]))
			cout << "��";
		else
			cout << "��";
		cout << "a[" << i << "] = " << a[i] << '\n';
	}
}

int main()
{
	srand(time(NULL));			// �N�üƪ��ت�l��
	int a[10];					// �������A��int ���A�B�����Ƭ�10���}�C

	for (int i = 0; i < 10; i++)
		a[i] = rand() % 100;	// ���w0 ~ 99���ü�

	ary_disp(a, 10, f);

	cout << "------------\n";

	ary_disp(a, 10, g);
}
