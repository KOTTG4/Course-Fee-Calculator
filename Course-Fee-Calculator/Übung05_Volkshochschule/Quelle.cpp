#include<iostream>
#include<iomanip>
#include<cmath>

using namespace std;

int main () {
	locale::global(std::locale("German_germany"));

	double varStunden;
	double varKursAbend;
	double varKursKosten = 4.25;
	double varGesamt;
	int varAbfrage;

	cout << "############ Willkommen zu Volkshochschule Nürnberg ############" << endl << endl << endl;
	cout << "-------------------- Kursgebühren Rechener --------------------" << endl << endl << endl << endl << endl;
	cout << "Kurs Kosten pro Person: " << ceil(varKursKosten)<< endl << endl;

	cout << "-----------------------------------------------------------" << endl;
	cout << "Geben Sie ihre Anzahl von Stundenzahl: ";
	cin >> varStunden;

	cout << "Geben Sie ihre Anzahl von Kursabenden: ";
	cin >> varKursAbend;

	cout << "Sind sie ein Mitglied der VHS: ";
	cout << "1-Ja " << " / 2-Nein "<<endl;
	cin >> varAbfrage;

	system("CLS");
	cout << "-----------------------------------------------------------" << endl;
	cout.setf(ios::fixed);
	cout << setprecision(2);

	if (varAbfrage == 1) 
	{ 
		varGesamt = (varStunden*ceil(varKursKosten)*varKursAbend / 100 * 60);
			cout << "Sie sind ein Mitglied der VHS" << endl;
	}
	if (varAbfrage == 2) 
	{
		varGesamt = (varStunden*ceil(varKursKosten)*varKursAbend);
		cout << "Sie sind Keine Mitglied der VHS" << endl << endl;
	} 
	cout << "Preis Pro Stunde :\t" << ceil(varKursKosten) << endl;
	cout << "Stundezahl Pro Abend :\t" << varStunden << endl << endl;
	cout << "Zahl der Abend :\t" << varKursAbend << endl << endl;
	cout << "Gesamtpreis :\t\t" << varGesamt << endl << endl;

	system("pause");

	return 0;
}