#include <iostream>
#include <string>

using namespace std;

int berechneFlaecheninhalt(int laenge, int breite){
    int result = laenge*breite;
}

int main(){
    int laenge;
    int breite;
    cin >> laenge;
    cin >> breite;
    int result = berechneFlaecheninhalt(laenge, breite);
    cout << result << endl;
}