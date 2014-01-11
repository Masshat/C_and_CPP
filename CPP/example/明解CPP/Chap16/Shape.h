// �ϧ����OShape

#if !defined(___Class_Shape)
	#define	 ___Class_Shape

#include <iostream>
using namespace std;

//=====�ϧ����O�]��H���O�^ =====//
class Shape {
public:
	virtual void draw() = 0;		// ø�ϡ]�µ�����ơ^
};

//===== �I =====//
class Point : public Shape {
public:
	void draw() {
		cout << "�I\n"; 
		cout << "*\n";
	}
};

//===== �������u =====//
class HLine : public Shape {
	int length;			// ����

public:
	HLine(int s) : length(s) { }

	void draw() {
		cout << "�������u�]���סG" << length << "�^\n"; 
		for (int i = 1; i <= length; i++)
			cout << '*';
		cout << '\n';
	}
};

//===== �������u =====//
class VLine : public Shape {
	int length;			// ����

public:
	VLine(int s) : length(s) { }

	void draw() {
		cout << "�������u�]���סG" << length << "�^\n"; 
		for (int i = 1; i <= length; i++)
			cout << "*\n";
	}
};

//===== ����� =====//
class RectAngle : public Shape {
	int width;			// �e��
	int height;			// ����

public:
	RectAngle(int w, int h) : width(w), height(h) { }

	void draw() {
		cout << "����Ρ]�e�סG" << width << "�@���סG" << height << "�^\n"; 
		for (int i = 1; i <= height; i++) {
			for (int j = 1; j <= width; j++)
				cout << '*';
			cout << '\n';
		}
	}
};

//===== ���U������������T���� =====//
class Triangle : public Shape {
	int length;			// �۵������䪺����

public:
	Triangle(int s) : length(s) { }

	void draw() {
		cout << "����T���Ρ]���סG" << length << "�^\n"; 
		for (int i = 1; i <= length; i++) {
			for (int j = 1; j <= i; j++)
				cout << '*';
			cout << '\n';
		}
	}
};

#endif
