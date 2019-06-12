#include <iostream>

using namespace std;

int main() {
	float practica, teorica, participacion, notaFinal;

	cout << "Escriba la nota de practica: ";
	cin >> practica;

	cout << "Escriba la nota de teorica: ";
	cin >> teorica;

	cout << "Escriba la nota de participacion: ";
	cin >> participacion;

	practica *= 0.30;
	teorica *= 0.60;
	participacion *= 0.10;

	notaFinal = practica + teorica + participacion;

	cout << "\nLa nota final es: " << notaFinal << endl;

	return 0;
}