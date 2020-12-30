#include <iostream>

using namespace std;


int berechneKontostand(int kontostand, int geldabnahme){
	kontostand = kontostand - geldabnahme;
	return kontostand;
}

int main() {
	int kontostand = 1000;
	int abgehoben;
	cout << "Wie viel Geld wollen sie abheben?" << endl;
	cin  >> abgehoben;
	/* Eingabe wird nicht auf Korrektheit (zum Beispiel negative Zahlen) ueberprueft sondern weiterverwendet */
	kontostand = berechneKontostand(kontostand, abgehoben);
	/* Bei einer negativen Eingabe wuerde sich der Kontostand unerwuenscht erhoehen */
	cout << kontostand;
	return 0;
}




