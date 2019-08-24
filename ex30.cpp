#include <iostream>
#include <conio.h>

using namespace std;

int main() {
	int n[] = {1, 2, 3, 4, 5};
	int mul = 0;

	for(int i = 0; i < 4; i++) {

		mul *= n[i];
	}

	cout << "La multiplicacion de los elementos del vector son: " << mul << endl;

	getch();
	return 0;
}
