#include "Nvrednost.h"

Nvrednost operator+(const Nvrednost& n1, const Nvrednost& n2){
	return Nvrednost(n1.uh + n2.uh,
		n1.masti + n2.masti,
		n1.proteini + n2.proteini);
	
}

ostream& operator<<(ostream& os, const Nvrednost& n){
	return os << "[uh: " << n.uh << "   ma: " << n.masti << "   pr: " << n.proteini << " ]";
}

double Nvrednost::brKalorija()const{
	double k = (uh + proteini) * 4 + masti * 9;
	return k;
}
