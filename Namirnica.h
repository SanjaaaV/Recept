#ifndef _Namirnica_h_
#define _Namirnica_h_
#include <string>
#include "Nvrednost.h"
using namespace std;


class Namirnica{
	string naziv;
	Nvrednost nutritivnaVrednost;
	bool posno;

public:
	Namirnica(string naz, Nvrednost n, bool p):naziv(naz), nutritivnaVrednost(n),posno(p){}
	//posle casa 

	string dohvNaziv()const { return naziv; }
	Nvrednost dohvNutritivnuVrednost()const { return nutritivnaVrednost;}
	bool dohvPosno()const  { return posno; }

	friend bool operator==(const Namirnica& n1, const Namirnica& n2);

	friend ostream& operator<<(ostream& os, const Namirnica& n);
};

#endif