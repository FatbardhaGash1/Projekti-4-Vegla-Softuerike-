int main() {
	int a, b, c;
	double temaPerDite;
home:
	home();
	if (choice == "mesatarja") {
	mesatarja:
		Studenti studenti;
		cout << "Jep emrin e studentit: ";
		cin >> studenti.emri;
		cout << "Jep numrin e notave te studentit: " << endl;
		cin >> studenti.nrNotave;
		cout << "Jep notat e studentit" << endl;
		studenti.mes();

		cout << "Mesatarja e studentit " << studenti.emri << " eshte ";
		studenti.shtypMesataren();
		perseri();
		if (choice == "po" || choice == "Po" || choice == "PO") {
			goto mesatarja;
		}
		else if (choice == "jo" || choice == "Jo" || choice == "JO") {
			goto home;
		}
	}
	else if (choice == "plani") {
		cout << "MIRSEVINI NE PROGRAMIN E PLANIFIKIMIT TE MESIMIT !" << endl << endl;
		cout << "Jep numrin e temave qe ke per ti mesuar: ";
		cin >> a;
		cout << "Jep ditet qe ke kohe qe ti mesoni keto tema: ";
    cin >> b;
		cout << endl;
		cout << "PLANI I MESIMIT: " << endl << endl;
	}
}