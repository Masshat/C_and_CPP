// �Q�ζüƲ���0~9�����B���X�����

#include <ctime>
#include <cstdlib>
#include <iostream>
using namespace std;

int main()
{
	srand(time(NULL));				// �]�w�üƪ��ؤl

	int lucky = rand() % 10;				// 0~9���ü�

	cout << "���Ѫ����B���X�O" << lucky << "�C\n";

	return 0;
}
