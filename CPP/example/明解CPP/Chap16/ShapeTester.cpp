// �ϧ����OShape���ϥνd��

#include <iostream>
#include "Shape.h"
using namespace std;

int main()
{ 
	Shape* v[5];

	v[0] = new Point();				// �I
	v[1] = new HLine(4);			// �������u
	v[2] = new VLine(2);			// �������u
	v[3] = new RectAngle(4, 3);		// �����
	v[4] = new Triangle(5);			// ����T����

	for (int i = 0; i < 5; i++)
		v[i]->draw();		                // �e�X�Ҧ��ϧ�

	return 0;
}
