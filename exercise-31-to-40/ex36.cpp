#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main() {
	char palabras[] = "Miguel";
	char palabras2[] = {'M', 'i', 'g','u', 'e', 'l'};
	char nombre[20];

	cout << "Escriba su nombre: ";
	// cin >> nombre;
	// gets(nombre);
	cin.getline(nombre, 20, '\n');

	cout << nombre << endl;

	getch();
	return 0;
}