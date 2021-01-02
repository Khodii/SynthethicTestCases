#include <stdio.h>
#include <cstring>
#include <iostream>

using namespace std;

void executeDataEntry(string data[]){
    const char *execute = data[2].c_str();
    system(execute);
}

int main(void){
    string data[10];
    data[1] = "ISSE";
    data[2] = "dir";
    executeDataEntry(data);
    return 0;
}