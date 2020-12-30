#include <iostream>

using namespace std;

int getValueArray(int *array, int index, int len)
{
	/* Es wird ein Array, dessen Laenge und die erwuenschte Stelle uebergeben */
	if (index > len){
		return 0;
	}
	/* Hier wird beispielsweise ueberprueft, ob index > len ist, jedoch fehlt die Abfrage index < len) */
	/* Also wuerde ein negativer Index nicht ausgeschlossen werden, was zur CWE125 fuehrt. */
	int value = array[index];
	return value;
}

int main(){
	int len = 4;
	int index = 3;
	int array[4] = {0,1,2,3};
	int result = getValueArray(array, index, len);
	cout << result;
	return 0;
}







