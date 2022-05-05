#include "Nvrednost.h"
#include "Namirnica.h"
#include "Sastojak.h"
#include "Lista.h"


int main() {
	Nvrednost n1(30, 10, 20);
	Nvrednost n2(20, 8, 6);
	Nvrednost n3(35, 12, 9);
	cout << n1 << endl;
	cout << n1 + n2 << endl;
	cout << "Kalorije n1: " << n1.brKalorija() << endl<<endl;



	Namirnica nn1("Sir", n1, 0);
	Namirnica nn2("Makarone", n2, 1);
	cout << nn1 << endl;
	cout << nn2 << endl;
	cout << "Da li su namirnice iste: " << (nn1 == nn2) << endl<<endl;




	Sastojak ss1(nn1, 250);
	Sastojak ss2(nn2, 500);

	Lista<Sastojak> l1;
	l1.dodaj(ss1);
	l1.dodaj(ss2);
	cout << "Lista sajtojaka:" << endl;
	l1.pisi();

}