#include <stdio.h>
#include <cstring>
#include <iostream>

using namespace std;

int main(void)
{
    string strings[] = {"ingenieur", "informatik", "weakness", "static"};
    int index;
    cout << "Welchen Teil des String Felds wollen Sie?" << endl;
    cin >> index;
    cout << strings[index] <<endl;
    return 0;
}
