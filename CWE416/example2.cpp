#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
	int *ptr;
	ptr = (int*) malloc(5*sizeof(int));
	cout << "5 Integer eingeben" << endl;

	for (int i=0; i<5; i++)
	{
		cin >> *(ptr+i);
	}
	cout << endl << "Eingegebene Werte"<< endl;

	for (int i = 0; i < 5; i++)
	{
		cout << *(ptr+i) << " ";
	}
    cout << "" << endl;
	free(ptr);

	/* Zeigt die Werte nach free */
	cout << "Garbage Value" << endl;

	for (int i = 0; i < 5; i++)
	{
		cout << *(ptr+i) << " " << endl;
	}

    /* Moegliche Verwendung */
    int result = 0;
    result = 5.4 * (*(ptr));
    cout << "Das Ergebnis ist" << result << endl;
	return 0;
}