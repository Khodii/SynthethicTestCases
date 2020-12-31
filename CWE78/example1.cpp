#include <stdio.h>
#include <cstring>
#include <iostream>

using namespace std;

void executeDataEntry(string data[]){
    const char *execute = data[2].c_str();
    system(execute);
    /*Falls beispielsweise cmd in data[2] steht, kann der Angreifer eine Shell im System oeffnen und benutzen*/
}

int main(void){
    string data[10];
    cin >> data[1];
    cin >> data[2];
    /* Hier koennten Beispielsweise die Befehle dir / cd oder ganz kritisch cmd eingeschleust werden, welche
    spaeter durch die Funktion executeDataEntry ausgefuert werden*/
    executeDataEntry(data);
}