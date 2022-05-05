#include "Sastojak.h"

ostream& operator<<(ostream& os, const Sastojak& s){
	return os << "[" << s.kalorijeSastojak() << "kcal]" << s.kolicina << "g  x" << s.namirnica;
}

Nvrednost Sastojak::odrediNvrednost() const{
	double k = kolicina / 100.;
	return  Nvrednost((this->namirnica.dohvNutritivnuVrednost().dohvUh()) * k,
		(this->namirnica.dohvNutritivnuVrednost().dohvMasti()) * k,
		(this->namirnica.dohvNutritivnuVrednost().dohvProteine()) * k);
	
}

double Sastojak::kalorijeSastojak() const{
	return { this->odrediNvrednost().brKalorija() };
}

