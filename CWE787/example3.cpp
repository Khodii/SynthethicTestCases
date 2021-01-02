#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

void* EingabeOutofBounds(char speicher[]) {
    cout << "Eingabe machen \n";
    cin >> speicher;
    cout << speicher << endl;
}

int main(){
    char eingabe[10];
    EingabeOutofBounds(eingabe);
    cout << eingabe[11];
    return 0;
    }


    
