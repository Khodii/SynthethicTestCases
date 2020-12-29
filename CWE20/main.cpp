/*
 * main.cpp
 *
 *  Created on: 30.11.2020
 *      Author: Marcel
 */

#include <iostream>

using namespace std;

int anzahl_mitarbeiter = 10;

int main() {

	int mitarbeiter_neu;
	cout << "Wie viele neue Mitarbeiter gibt es?" << endl;
	cin  >> mitarbeiter_neu;
	/* Eingabe wird nicht auf Korrektheit ueberprueft sondern weiterverwendet */
	anzahl_mitarbeiter = anzahl_mitarbeiter + mitarbeiter_neu;
	/* Beispielsweise bei einer negativen Eingabe wuerde sich die Mitarbeiteranzahl unerwuenscht verringern */
	return 0;
}



