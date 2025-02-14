	if (a == b) {
			cout << "Tre ditet e para mesoni nga 2 tema, pastaj vetem nga nje. Cdo te dyten dite duhet te beni 'brainstorm' \n(Ne menyra te ndryshme si,";
			cout << "pyetje pergjigjje ne flete ose thjeshte ne siperfaqesi te lexoni temat qe keni mesuar 2 ditet e kaluara) dhe tre ditet e fundit te fokusoheni ne perseritje." << endl;
	}
	else if (a < b) {
			cout << "Shume mire paskeni kohe qe te mesoni! Mesoni cdo dite nga nje teme, dhe ditet e fundit qe ju mbesin shfrytezoni per\nperseritje(kur ndiheni qe jeni produktiv";
			cout << " eshte e rendesishme qe te konsideroni thyerjen pak te planit,duke mesuar\npak me shume se nje teme ne dite, sepse ajo ju mundson te keni me shume koh per perseritje)" << endl;
	}
	else if (a > b && b >= 10) {
			cout << "Rendesia me e madhe kur mesoni nen presionin e kohes eshte qe te mbani qetesine, motivimin dhe mos te beni 'out-burn'(te mesoni me shum se cfare mundeni, ne menyre qe" << endl;
			cout << "ato qe i keni mesuar mos ti harroni nga stresi)." << endl;
			temaPerDite = 1.0 * a / (b - 2);
			a = temaPerDite;
			cout << "Cdo dite te mesoni nga " << a << " - " << a + 1 << " dhe 2 ditet e fundit te fokusoheni ne perseritjen e lendes." << endl;
	}
	else if (a > b && b < 10) {
			cout << "Rendesia me e madhe kur mesoni nen presionin e kohes eshte qe te mbani qetesine, motivimin dhe mos te beni \n'out-burn'(te mesoni me shum se cfare mundeni, ne menyre qe";
			cout << "ato qe i keni mesuar mos ti harroni nga stresi)." << endl;
			temaPerDite = 1.0 * a / b;
			a = temaPerDite;
			cout << "Cdo dite te mesoni nga " << a << " - " << a + 1 << " tema\n(kur ndiheni qe jeni produktiv";
			cout << " eshte e rendesishme qe te konsideroni thyerjen pak te planit,\nduke mesuar pak me shume se nje teme ne dite, sepse ajo ju mundson te keni me shume koh per\nperseritje)" << endl;
	}


	}
	else if (choice == "dil") {
		goto dil;
	}
	else {
		cout << "Gabim ne kerkese!! " << endl;
		goto home;
	}
dil:
	return 0;
}
