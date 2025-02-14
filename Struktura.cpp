#include <iostream>
#include <iomanip>
using namespace std;
double mesatarja;
string choice;
struct Studenti {
	int nrNotave = 0;
	string emri;
	double mes() {
		int shuma = 0, nota;
		for (int i = 1; i <= nrNotave; i++) {
			cout << "Shkruaj noten e [" << i << "]: ";
			cin >> nota;
			shuma += nota;
		}
		mesatarja = shuma * 1.0 / nrNotave;
		return mesatarja;
	}
	void shtypMesataren() {
		cout << setprecision(2) << fixed << mesatarja;
	}

};
