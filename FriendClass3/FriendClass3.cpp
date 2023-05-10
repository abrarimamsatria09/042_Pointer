#include <iostream>
#include <string>
using namespace std;

class pelajar;

class manusia {
public:
	void shownilaipelajar(pelajar&);
};

class pelajar {
private:
	int nilai;
public:
	pelajar() {
		nilai = 100;
	}
	friend void manusia::shownilaipelajar(pelajar& x);
};

void manusia::shownilaipelajar(pelajar& x) {
	cout << "Nilai Pelajar: " << x.nilai;
}
int main()
{
	manusia m;
	pelajar p;
	m.shownilaipelajar(p);
	cout << endl;
	system("\npause");
	return 0;
}