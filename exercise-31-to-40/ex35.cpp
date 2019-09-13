#include <iostream>
#include <conio.h>

using namespace std;

int main() {
	int numero[100][100], filas, columnas;
	char band = 'F';

	cout << "Escriba el numero de filas: ";
	cin >> filas;

	cout << "Escriba el numero de columnas: ";
	cin >> columnas;

	for(int i = 0; i < filas; i++) {
		for(int j = 0; j < columnas; j++) {
			cout << "Escriba un numero [" << i << "][" << j << "]: ";
			cin >> numero[i][j];
		}
		cout << "\n";
	}

	if(filas == columnas) {
		for(int i = 0; i < filas; i++) {
			for(int j = 0; j < columnas; j++) {
				if(numero[i][j] == numero[j][i]) {
					band = 'V';
				}
			}
			cout << "\n";
		}
	}

	if(band == 'V') {
		cout << "La matriz es simetrica" << endl;
	}
	else {
		cout << "La matriz no es siemtrica" << endl;
	}

	getch();
	return 0;
}