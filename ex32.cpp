#include <iostream>
#include <conio.h>

using namespace std;

int main() {
	int numero[100][100], filas, columnas;

	cout << "Escirba el numero del fila: ";
	cin >> filas;

	cout << "Escriba el numero de columnas: ";
	cin >> columnas;

// Almancenando elementos en la matriz
	for(int i = 0; i < filas; i++) {
		for(int j = 0; j < columnas; j++) {

			cout << "Escriba un numero ["<< i << "][" << i << "]: ";
			cin >> numero[i][j];
		}
	}

// Mostrando la matriz
	for(int i = 0; i < filas; i++) {
		for(int j = 0; j < columnas; j++) {

			cout << numero[i][j];
		}

		cout << "\n";
	}

	getch();
	return 0;
}