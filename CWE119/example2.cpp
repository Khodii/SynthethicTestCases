#include <stdio.h>
#include <iostream>

using namespace std;

int main(void)
{
    int wichtig = 1;
    int buf[10];

    cout << "int wichtig ist " << wichtig << endl;
    
    for(int i = 0; i < 11; i++){
        buf[i]= 7;
    }

    cout << "Nach Overflow int wichtig ist = " << wichtig << endl;
    return 0;
}