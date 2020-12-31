#include <iostream>

using namespace std;

int main(){
    int *buffer;
    int eingabe = 0;
    cin >> eingabe;
    /* Dem Count wird nun eine Benutzereingabe zugewiesen */
    /* Ohne Ueberpruefung kann unerwunscht viel Speicherplatz reserviert werden */
    buffer = (int*) malloc(eingabe);
}