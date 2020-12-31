#include <iostream>

using namespace std;

int addiere(int x1){
    int x2;
    cin >> x2;
    int result = x1 + x2;
    return result;
}

int main()
{
    /* Nachfolgende Zahl 2147483647 ist die maximal darstellbare Zahl als int */
    int x = 2147683647;
    /* Addiere mit Nutzereingabe */
    x = addiere(x);
    cout << x << std::endl;
    /* Nun wird der neue Wert fuer eine Berechnung verwendet */
    int y = x + 1000;
    cout << y << endl;
}