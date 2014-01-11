// ��e�૬

#include <iostream>
#include "ShapeWindow.h"
using namespace std;

int main()
{
	Shape* s = new HLine(5);				// �������u

	if (Window* w = dynamic_cast<Window*>(s))		// ���O����
		cout << "���n��" << w->area() << "�C\n";	// �L�k�D�o���n


	Shape* r = new RectAngle(3, 5);				// �����

	if (Window* w = dynamic_cast<Window*>(r))		// �]���O����
		cout << "���n��" << w->area() << "�C\n";	               								// �i�D�o���n


	Window* t = new Triangle(4);				// ����T����

	if (Shape* s = dynamic_cast<Shape*>(t))			// �]���O�ϧ�
		s->draw();															// �i�Hø��

	delete s;
	delete r;
	delete t;

	return 0;
}
