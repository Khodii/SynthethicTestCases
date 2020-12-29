/*
 * Example.cpp
 *
 *  Created on: 01.12.2020
 *      Author: Marcel
 */

#include <iostream>

using namespace std;

int getValueArray(int *array, int index, int len)
{
	/* Es wird ein Array, dessen Laenge und die erwünschte Stelle uebergeben */
	if (index > len){
		return 0;
	}
	/* Hier wird beispielsweise ueberprueft, ob index > len ist, jedoch fehlt die Abfrage index < len) */
	/* Also wuerde ein negativer Index nicht ausgeschlossen werden, was zur CWE125 fuehrt. */
	int value = array[index];
	return value;
}


int main(){
	int len = 5;
	int index = -4;
	int array[4];
	array[0] = 1;
	array[1] = 2;
	array[2] = 3;
	array[3] = 4;

	int result = getValueArray(array, len, index);
	cout << result;
	return 0;
}







