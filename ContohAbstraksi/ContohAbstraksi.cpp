#include <iostream>
using namespace std;

class AbstraksiClass {
private:
	string x, y;
public:
	void setXY(string a, string b) {
		x = a;
		y = b;
	}
	void display() {
		cout << "x = " << x << endl;
		cout << "y = " << y << endl;
	}
};

int main() {
	AbstraksiClass ac;
	ac.setXY("Yogyakarta", "Malang");
	ac.display();
	return 0;
}