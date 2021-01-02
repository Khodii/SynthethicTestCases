#include <iostream>
#include <string>

using namespace std;

void addfilm(string filmsammlung[], string film, int index ){
    filmsammlung[index] = film;
}

int main(){
    string filmsammlung[10];
    string film;
    int index = 0;
    for (int i = 0; i < 5; i++){
        cin >> film;
        cin >> index;
        addfilm(filmsammlung, film, index);
    }
    for(int i = 0; i < 5; i++){
        cout << filmsammlung[i] << endl;
    }
    return 0;
}