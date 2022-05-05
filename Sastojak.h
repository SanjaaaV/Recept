#ifndef _Sastojak_h_
#define _Sastojak_h_
#include "Namirnica.h"
#include "Nvrednost.h"


class Sastojak{

	Namirnica namirnica;
	double kolicina;

public:
	Sastojak(Namirnica n, double kol):namirnica(n), kolicina(kol){}

	Namirnica dohvNamirnicu() { return namirnica; }
	double dohvKolicinu() { return kolicina; }

	Nvrednost odrediNvrednost()const;
	double kalorijeSastojak()const;

	friend ostream& operator<<(ostream& os, const Sastojak& s);

};

#endif