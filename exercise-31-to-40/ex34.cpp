#include <iostream>
#include <conio.h>
using namespace std;

int main() {
	int numero[3][3];

	for(int i = 0; i < 3; i++) {
		for(int j = 0; j < 3; j++) {
			cout << "Escribe un numero [" << i << "][" << j << "]: ";
			cin >> numero[i][j];
		}
	}

	cout << "\nMatriz original" << endl;

	for(int i = 0; i < 3; i++) {
		for(int j = 0; j < 3; j++) {
			cout << numero[i][j] << " ";
		}
		cout << "\n";
	}

	cout << "\nMatriz Transpuesta" << endl;

	for(int i = 0; i < 3; i++) {
		for(int j = 0; j < 3; j++) {
			cout << numero[j][i] << " ";
		}
		cout << "\n";
	}

	getch();
	return 0;
}