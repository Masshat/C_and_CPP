// �N�üƫ��w���}�C���Ҧ����������

#include <ctime>
#include <cstdlib>
#include <iostream>
using namespace std;

int main()
{
	srand(time(NULL));		// ��l�ƶüƪ��ؤl
	int a[5];					// �������A��int���A�B�����Ƭ�5���}�C

	for (int i = 0; i < 5; i++)
		a[i] = rand() % 10;		// ���w0��9���ü�

	for (int i = 0; i < 5; i++)
		cout << "a[" << i << "] = " << a[i] << '\n';

	return 0;
}
