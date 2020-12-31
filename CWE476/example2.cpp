#include <iostream>
#include <time.h>

using namespace std;

int main(){
    srand(time(NULL));
    
    int *ptr = NULL;
    int result = 0;
    int zufall = (rand() % 2) + 1;
    cout << zufall << endl;
    if (zufall == 1) {
        int result = *ptr;
    }
    int berechnung = result + 1;
}
