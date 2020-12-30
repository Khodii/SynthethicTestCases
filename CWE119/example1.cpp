#include <stdio.h>
#include <cstring>
#include <iostream>

using namespace std;

int main(void)
{
    char buff[15];
    int authentifiziert = 0;
    /*int authentifiziert wird hinter dem Buffer im Speicher initiliasiert */

    cout << "Geben Sie das Passwort ein" << endl;
    gets(buff);
    /* fehlende Ueberpruefung ob das eingegebene Passwort zu lang fuer den Buffer ist */

    if(strcmp(buff, "lehrstuhlbauer") == 0) {
        cout << "Richtiges Passwort" << endl;
        authentifiziert = 1;
    }
    else {
        cout << "Falsches Passwort" << endl;
    }

    if(authentifiziert){
        /* Beispielsweise vergeben von Admin Rechten*/
        cout << "Admin Rechte vergeben" << endl;
    }

    return 0;
}