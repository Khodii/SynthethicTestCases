#include <iostream>

using namespace std;

void arraycopy(int * dataArray, int size) {
        /* Es wird ein bereits befuellter dataArray und dessen Laenge uebergeben */
        int id_sequenz[3];
        /* Befuellen des sequenz Felds mit den Daten aus dataArray. */
        /* Es wurden nur 3 Speicherbereiche fuer id_sequenz reserviert, die nachfolgende for-Schleife schreibt bis id_sequenz[3] und somit in nicht allokierten Speicher.*/
        for (int i = 0; i < size; i++) {
            id_sequenz[i] = dataArray[i];
        }
        std::cout << id_sequenz[4];
        /* Es fehlt eine Ueberpruefung auf die Laenge des uebergebenen dataArrays. */
    }

int main(){
    int dataArray[6] = {1,2,3,4,5,6};
    int size = sizeof(dataArray);
    arraycopy(dataArray, size);
    return 0;
}
    

