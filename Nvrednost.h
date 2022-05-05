#ifndef _Nvrednost_h_
#define _Nvrednost_h_
#include <iostream>
using namespace std;


class Nvrednost{

	double uh;
	double masti;
	double proteini;

public:
	Nvrednost(double u, double m, double p):uh(u),masti(m),proteini(p){}

	double dohvUh()const { return uh; };
	double dohvMasti()const { return masti; }
	double dohvProteine()const { return proteini; }

	friend Nvrednost operator+(const Nvrednost& n1, const Nvrednost& n2);

	double brKalorija()const;

	friend ostream& operator<<(ostream& os, const Nvrednost& n);

};

#endif