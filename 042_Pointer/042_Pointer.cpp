#include <iostream>
using namespace std;

class mahasiswa {
public:
	int nim;
	void shownim(); // deklarasi method
};

void mahasiswa::shownim() { //implementasi method diluar class
	cout << "No Induk = " << nim << endl;
}
