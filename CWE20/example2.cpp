#include <iostream>
#include <string>

using namespace std;

void addfilm(string filmsammlung[], string film, int index ){
    filmsammlung[index] = film;
}

int main(){
    int index = 0;
    string filmsammlung[10];
    string film;
    for (int i = 0; i < 5; i++){
        cin >> film;
        addfilm(filmsammlung, film, i);
    }
    for(int i = 0; i < 5; i++){
        cout << filmsammlung[i] << endl;
    }
}