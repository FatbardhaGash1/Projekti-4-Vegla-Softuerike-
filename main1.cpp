int main() {
	int a, b, c;
	double temaPerDite;
home:
	home();
	if (choice == "mesatarja") {
	mesatarja:
		Studenti n;
		cout << "Jep emrin e studentit: ";
		cin >> n.emri;
		cout << "Jep numrin e notave te studentit: " << endl;
		cin >> n.nrNotave;
		cout << "Jep notat e studentit" << endl;
		n.mes();

		cout << "Mesatarja e studentit " << n.emri << " eshte ";
		n.shtypMesataren();
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


