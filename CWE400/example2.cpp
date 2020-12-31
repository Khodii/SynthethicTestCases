#include <iostream>

using namespace std;

int main(){
    int count = 0;
    cin >> count;
    /* Dem Count wird nun eine Benutzereingabe zugewiesen */
    /* Moeglicher Fehler: Der Count wird als Loop Invariable ohne vorhergehende Validierung verwendet. */
    for (int i = 0; i < count; i++) {
        cout << "Hello World" << endl;
        /* Inhalt der Schleife kann unerwartet oft ausgefuhert werden, was zu einem Denial of Service fuehren kann oder dem Verbrauch von zu viel Speicherplatz */
    }
}