#include <stdio.h>
#include <cstring>
#include <iostream>

using namespace std;

int main(void){
    string data[10];
    data[1] = "ISSE";
    data[2] = "cmd";
    const char *execute = data[2].c_str();
    system(execute);
}