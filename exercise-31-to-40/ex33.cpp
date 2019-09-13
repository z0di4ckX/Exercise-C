#include <iostream>
#include <conio.h>

using namespace std;

int main() {
	int numero[2][2] = {{1, 2} , {3, 4}};
	int matriz[2][2];

	// Pasando el contenido de numero hacia al matriz
	for(int i = 0; i < 2; i++) {
		for(int j = 0; j < 2; j++) {

			matriz[i][j] = numero[i][j];
		}
	}

	for(int i = 0; i < 2; i++) {
		for(int j = 0; j < 2; j++) {

			cout << matriz[i][j];
		}

		cout << "\n";
	}

	getch();
	return 0;
}