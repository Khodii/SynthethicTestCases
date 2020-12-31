#include <iostream>

using namespace std;

int main()
{
    int overflown = 0;
    /* Nachfolgende Zahl 2147483647 ist die maximal darstellbare Zahl als int */
    int x1 = 2147483000;
    int x2 = 700;
    overflown = x1 + x2;
    cout << overflown << std::endl;
    /* Nun wird der neue Wert fuer eine Berechnung verwendet */
    int y = overflown + 1000;
    cout << y << endl;
}