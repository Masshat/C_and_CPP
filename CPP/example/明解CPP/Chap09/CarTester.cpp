// �T�����O���ϥνd��

#include <iostream>
#include "Car.h"
using namespace std;

int main()
{
	string name;
	int width, length, height;
	double gas;
	cout << "�п�J���l����ơC\n";
	cout << "�W�٬O�G";  cin >> name;
	cout << "���e�O�G";  cin >> width;
	cout << "�����O�G";  cin >> length;
	cout << "�����O�G";  cin >> height;
	cout << "�T�o���q�O�G";  cin >> gas;

	Car myCar(name, width, length, height, gas);
	myCar.PutSpec();		// ��ܳW��

	while (true) {
		cout << "�ثe��m(" << myCar.X() << ", " << myCar.Y() << ")\n";
		cout << "�Ѿl�U�ơG" << myCar.Fuel() << '\n';
		cout << "�O�_����[0�KNo��1�KYes]�G";
		int move;
		cin >> move;
		if (move == 0) break;

		double dx, dy;
		cout << "�����V�����ʶZ���G";  cin >> dx;
		cout << "�����V�����ʶZ���G";  cin >> dy;
		if (!myCar.move(dx, dy))
			cout << "\a�U�Ƥ����I\n";
	}
}
