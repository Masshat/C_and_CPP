// �Ƽ����OComplex

#if !defined(___Class_Complex)
	#define  ___Class_Complex

#include <iostream>
using namespace std;

//===== �Ƽ����O =====//
class Complex {
	double re;		// �ꪺ����
	double im;		// �ꪺ����

public:
	Complex(double r = 0, double i = 0) : re(r), im(i) { }	// �غc�l

	double Real() const { return re; }	// �Ǧ^�ꪺ����
	double Imag() const { return im; }	// �Ǧ^�ꪺ����

	Complex operator+() { return *this; }				// �@���B��l+
	Complex operator-() { return Complex(-re, -im); }	// �@���B��l-

	// +=�B��l
	Complex& operator+=(const Complex& x) {
		re += x.re;
		im += x.im;
		return *this;
	}

	// -=�B��l
	Complex& operator-=(const Complex& x) {
		re -= x.re;
		im -= x.im;
		return *this;
	}

	friend bool operator==(const Complex& x, const Complex& y) {  // ==�B��l
		return x.re == y.re && x.im == y.im;
	}

	friend bool operator!=(const Complex& x, const Complex& y) {  // !=�B��l
		return !(x == y);
	}

	// Complex + Complex
	friend Complex operator+(const Complex& x, const Complex& y) {
		return Complex(x.re + y.re, x.im + y.im);
	}

	// double + Complex
	friend Complex operator+(double x, const Complex& y) {
		return Complex(x + y.re, y.im);
	}

	// Complex + double
	friend Complex operator+(const Complex& x, double y) {
		return Complex(x.re + y, x.im);
	}
};

inline ostream& operator<<(ostream& s, Complex& x)
{
	return s << '(' << x.Real() << ", " << x.Imag() << ')';
}

#endif
