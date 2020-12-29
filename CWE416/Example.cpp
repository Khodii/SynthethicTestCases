/*
 * Example.cpp
 *
 *  Created on: 01.12.2020
 *      Author: Marcel
 */

#include <iostream>

using namespace std;

int main(){

	char *buchstabe;
	*buchstabe = NULL;
	*buchstabe = 'A';
	delete buchstabe;
	std::cout << buchstabe;
	return 0;

}

