// �T�����O

#include <cmath>
#include <string>
#include <iostream>
using namespace std;

class Car {
	string name;				// �W��
	int width, length, height; 	                                // ���e�B�����B����
	double x, y;				// �{�b��m�y��
	double fuel;				// �Ѿl�U��

public:
	//--- �غc�l ---//
	Car(string n, int w, int l, int h, double f) {
		name = n; width = w; length = l; height = h; fuel = f; x = y = 0.0;
	}

	double X() { return x; }			// �Ǧ^�{�b��m��X�y��
	double Y() { return y; }			// �Ǧ^�{�b��m��Y�y��
	double Fuel() { return fuel; }		                // �Ǧ^�Ѿl�U��

	void PutSpec() {				// ��ܳW��
		cout << "�W�١G" << name << "\n"; 
		cout << "���e�G" << width << "mm\n"; 
		cout << "�����G" << length << "mm\n"; 
		cout << "�����G" << height << "mm\n"; 
	}

	bool move(double dx, double dy) {	                // �VX��V����dx�B�VY��V����dy
		double dist = sqrt(dx * dx + dy * dy);		// ���ʶZ��

		if (dist > fuel)
			return false;				// �U�Ƥ���
		else {
			fuel -= dist;				// ���ӤF���ʶZ�����q���U��
			x += dx;  y += dy;
			return true;
		}
	}
};
