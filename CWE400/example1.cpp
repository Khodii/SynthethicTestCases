#include <iostream>

using namespace std;

int main(){
    int *buffer;
    int eingabe = 0;
    cin >> eingabe;
    /* Dem Count wird nun eine Benutzereingabe zugewiesen */
    /* Ohne Ueberpruefung kann unerwunscht viel Speicherplatz reserviert werden */
    buffer = (int*) malloc(eingabe*sizeof(int));
    for (int i = 0; i < eingabe; i++) {
		buffer[i] = i*2+1;
	}
    /* Moeglicher Fehler: Die Eingabe wird als Loop Variable ohne vorhergehende Validierung verwendet. */
    for (int i=0; i < eingabe; i++) {
		/* Inhalt der Schleife kann unerwartet oft ausgefuhert werden, was zu einem Denial of Service fuehren kann oder dem Verbrauch von zu viel Speicherplatz */
        cout << buffer[i] << endl;
	}
}