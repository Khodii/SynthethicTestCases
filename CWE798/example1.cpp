#include <iostream>
#include <cstring>

using namespace std;

int checkeCredentials(char username [], char password[]){
    int retValue = 0;
    if(strcmp(username, "admin" ) == 0 && strcmp(password, "adminpass") == 0 ){
        retValue = 1;
    }
    return retValue;
}


int main( void )
{
    int authentifizierung = 0;
    char username[10];
    char password[10];

    std::cout << "Username?: ";
    std::cin >> username;

    std::cout << "Passwort?: ";
    std::cin >> password;

    authentifizierung = checkeCredentials(username, password);

    if(authentifizierung ) {
        std::cout << "Zugriff gewaehrt\n";
        std::cout << (char) authentifizierung;
    }
    else {
        std::cout << "Falsche Login Daten\n";
    }
    return 0;
}