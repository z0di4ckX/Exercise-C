#include <iostream>
#include <conio.h>

using namespace std;

int main() {
	int numero[100], n;

	cout << "Esciba el numero de elementos que va a tener el vector: ";
	cin >> n;

	for(int i = 0; i < n; i++) {

		cout << "Esciba un numero: ";
		cin >> numero[i]; // Guarda todos los elementos del vector
	}

	// Ahora, vamos a mostrar los elemetos con sus indices asociados
	cout << "=================================" << endl;

	for(int i = 0; i < n; i++) {

		cout << i << " => " << numero[i] << endl;
	}


	getch();
	return 0;
}