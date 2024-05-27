#include <iostream>
using namespace std;

class baseClass {
public:
	virtual void perkenalan() {
		cout << "Halo saya Function dari base class";
	}
};
class derviedClass :public baseClass {
public:
	void perkenalan() {
		cout << "Halo saya Function dari derived class";
	}
};

int main() {
	derviedClass a;
	a.perkenalan();
	return 0;
}