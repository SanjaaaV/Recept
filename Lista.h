#ifndef _Lista_h_
#define _Lista_h_
#include <exception>
using namespace std;

class GNemaTek :public exception {
public:
	const char* what()const {
		return "Nema tekuceg elementa!";
	}

};

template<typename T>
class Lista{
	struct Elem {
		T podatak;
		Elem* sled;
		Elem(const T& p, Elem* s=nullptr):podatak(p){
			sled = s;
		}
	};

	Elem* prvi, * posl;
	 Elem* tek;

public:
	Lista() {
		prvi = posl = tek  = nullptr;
	}

	Lista(const Lista&) = delete;
	Lista& operator=(const Lista&) = delete;
	~Lista() { isprazni(); }



	void naPrvi() { tek = prvi; }
	void naSledeci(){ if (tek) tek = tek->sled; }
	bool imaTek() { return tek != nullptr; }


	T& dohvPodatak() {
		if (!tek) throw GNemaTek();
		return tek->podatak;
	}

	void dodaj(const T& p) {
		posl = (!prvi ? prvi : posl->sled) = new Elem(p);
	}

	void isprazni() {
		Elem* stari = prvi;
		while (stari) {
			prvi = prvi->sled;
			delete stari;
			stari = prvi;
		}
		posl = tek = nullptr;
	}



	void pisi() {
		for (naPrvi(); imaTek(); naSledeci()) {
			cout << this->dohvPodatak()<<endl;
		}
	}



};

#endif