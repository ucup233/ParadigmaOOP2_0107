#include <iostream>
using namespace std;

class remoteLampu {
private:
	string saklarNo[10];
public:
	void setSaklarNo(int i, string value) {
		saklarNo[i] = value;
	}
	string getSaklarNo(int i) {
		return saklarNo[i];
	}
};

int main() {
	remoteLampu lampuRumah;

	lampuRumah.setSaklarNo(1, "Lampu Teras Rumah");
	lampuRumah.setSaklarNo(2, "Lampu Ruang Tamu");
	lampuRumah.setSaklarNo(3, "Lampu Kamar Tidur");
	lampuRumah.setSaklarNo(4, "Lampu Dapur");

	cout << lampuRumah.getSaklarNo(1) << endl;
	cout << lampuRumah.getSaklarNo(2) << endl;
	cout << lampuRumah.getSaklarNo(3) << endl;
	cout << lampuRumah.getSaklarNo(4) << endl;
	return 0;
}