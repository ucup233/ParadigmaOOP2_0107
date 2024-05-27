#include <iostream>
using namespace std;

class orang {
public:
	int umur;
	
	orang(int pUmur) :umur(pUmur) {
		cout << "Orang dibuat dengan umur " << "\n" << endl;
	}
};
class pekerja :public orang {
public:
	pekerja(int pUmur) : orang(pUmur) {
		cout << "Pekerja dibuat\n" << endl;
	}
};
class pelajar :public orang {
public:
	pelajar(int pUmur) : orang(pUmur) {
		cout << "Pelajar dibuat\n" << endl;
	}
};
class budi :public pekerja, public pelajar {
	budi(int pUmur) : pekerja(pUmur), pelajar(pUmur) {
		cout << "Budi dibuat\n" << endl;
	}
};