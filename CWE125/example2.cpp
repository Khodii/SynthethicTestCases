#include <iostream>

using namespace std;

void arrayread(int* dataArray, int size) {
    /* Es fehlt eine Ueberpruefung auf die Laenge des uebergebenen dataArrays im Zusammmenahng mit der size. */
    for (int i = 0; i < size; i++) {
        cout << dataArray[i] << endl;
    }
    /* Da sizeof(dataArray) < size sein kann, kann es zur CWE-125 kommen*/
}
int main() {
    int dataArray[6] = { 1,2,3,4,5,6 };
    int size = 8;
    arrayread(dataArray, size);
    return 0;
}




