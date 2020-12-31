#include <iostream>

using namespace std;

int main(){
    int check = 0;
    cin >> check;
    int *data;
    *data = 10;
    int dataArray[5];
    /* Moeglicher Fehler: Setze data auf NULL */
    if(check == 5){
        *data = NULL;
    }
    /* Und fuege nachfolgend data zu dataArray hinzu */
    dataArray[2] = *data;
    /* Dann wird dataArray mit einem NULL Wert uebergeben */ #
    int result = dataArray[2] + 1;
    cout << result << endl;
}