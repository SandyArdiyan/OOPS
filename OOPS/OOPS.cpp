#include <iostream>
using namespace std;

class mahasiswa {

public:
	int nim;
	void showNim() {
		cout << "No Induk = " << nim << endl:
	}
};

int main() {

	mahasiswa mhs{ 1 }; // 
	mhs.showNim(); //Member Access Operator

	mahasiswa& showNim(); //object mhs
	refMhs.nim = 2; // Member access operator
	mhs.showNim();

	Mahasiwa* reMhs = mhs; //pointer reference refMhs
	pMhs->nim 3; //Arrow operator
	pMhs->showNim();
	return 0;

	