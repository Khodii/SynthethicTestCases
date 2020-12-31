#include <iostream>
#include <cstring>

using namespace std;

int checkeCredentials(char username [], char password[]){
    int retValue = 0;
    /*Vergleichen der Nutzereingaben mit fest hinterlegten Benutzernamens "admin" und Passworts "adminpass" mit Hilfe von strcmp */
    if(strcmp(username, "admin" ) == 0 && strcmp(password, "adminpass") == 0 ){
        retValue = 1;
    }
    return retValue;
}
int main() {
    int authentifizierung = 0;
    char username[10];
    char password[10];
    cout << "Username?: ";
    cin >> username;
    cout << "Passwort?: ";
    cin >> password;
    /*Nutzeingabe des Benutzernamens und Passworts */
    authentifizierung = checkeCredentials(username, password);
    if(authentifizierung ) {
        cout << "Zugriff gewaehrt\n";
        cout << (char) authentifizierung;
    }
    else {
        cout << "Falsche Login Daten\n";
    }
    return 0;
}