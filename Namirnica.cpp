#include "Namirnica.h"

bool operator==(const Namirnica& n1, const Namirnica& n2){
    if (n1.dohvNaziv() == n2.dohvNaziv())return true;
    else return false;
}

ostream& operator<<(ostream& os, const Namirnica& n){
    return os << n.naziv << " - " << n.nutritivnaVrednost;
}


