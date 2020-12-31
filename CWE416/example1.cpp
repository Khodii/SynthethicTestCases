#include <iostream>

using namespace std;

int main(){
    char *buchstabe;
    *buchstabe = NULL;
    /* Buchstabe zeigt auf den Wert NULL */
    *buchstabe = 'A';
    /* Es wird in die Speicheradresse auf die buchstabe zeigt der Wert A geschrieben */
    delete buchstabe;
    /* buchstabe wird mit der delete Funktion geloescht */
    cout << buchstabe;
    /* Es kann immer noch 'A' ausgegeben werden */
    return 0;
}
