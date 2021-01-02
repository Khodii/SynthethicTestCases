#include <iostream>

using namespace std;

int main()
{
    int overflown = 0;
    /* Nachfolgende Zahl 2147483647 ist die maximal darstellbare Zahl als int */
    overflown = overflown + 2147483647;
    /* Das Erhoehen um 1 fuehrt zum Overflow und somit zum Wert x = -2147483648 */
    overflown = overflown + 1;
    cout << overflown << std::endl;
    /* Nun wird der neue Wert fuer eine Berechnung verwendet */
    int y = overflown + 1000000;
    cout << y << endl;
    return 0;
}