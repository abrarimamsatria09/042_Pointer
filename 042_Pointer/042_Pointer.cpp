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

int main()
{
	mahasiswa mhs{ 1 };			//object mhs
	mhs.shownim();				//member acces operator

	mahasiswa ref = mhs;		//pointer reference refmhs
	ref.nim = 2;				//member acces operator
	mhs.shownim();
}
