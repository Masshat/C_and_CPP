// �q�Ʀr�C�� (��2���G�C������)

#include <ctime>
#include <cstdlib>
#include "kazuate.h"
using namespace std;

static int kotae = 0;

//--- ��l�� ---//
void initialize()
{
	srand(time(NULL));
}

//--- ���ͭn�q������ ---//
void gen_no()
{
	kotae = rand() % (max_no + 1);
}

//--- �P�_  ---//
int judge(int cand)
{
	int diff = cand - kotae;

	if (diff == 0)		                 // ���T����
		return 0;
	else if (diff > 0)	                                 // �Ӥj�F
		return 1;
	else				 // �Ӥp�F
		return -1;
}
