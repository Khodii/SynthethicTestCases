#include <iostream>
#include <cstdlib>
#include <cstring>
using namespace std;

int main()
{
	float *ptr;
	ptr = (float*) calloc(1,sizeof(float));
	*ptr = 5.233;

	cout << "Before freeing" << endl;
	cout << "Address = " << ptr << endl;
	cout << "Value = " << *ptr << endl;

	free(ptr);

	cout << "After freeing" << endl;
	cout << "Address = " << ptr << endl;
	cout << "Value = " << *ptr << endl;

    float *zweiterPtr;
    zweiterPtr = ptr;
    float ergebnis = *zweiterPtr;
    cout << ergebnis << endl;

	return 0;
}