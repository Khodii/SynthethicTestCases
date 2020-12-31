#include <iostream>

using namespace std;

void dataConsumer(int dataArray[]){
    /* Moeglicher Fehler: Keine Ueberpruefung auf NULL */
    int data = dataArray[2];
    /* Nachfolgend wird data verwendet, welche NULL Werte beinhalten kann*/
    int result = data + 1;
}

int main(){
    int * data;
    int dataArray[5];
    /* Moeglicher Fehler: Setze data auf NULL */
    data = NULL;
    /* Und fuege nachfolgend data zu dataArray hinzu */
    dataArray[2] = *data;
    /* Dann wird dataArray mit einem NULL Wert an dataConsumer uebergeben, was zur CWE-476 fuehrt */
    dataConsumer(dataArray);
}