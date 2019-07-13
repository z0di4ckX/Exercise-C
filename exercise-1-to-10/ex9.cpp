#include <iostream>

using namespace std;

int main() {
	int number, dato = 5;

	cout << "Digite un numero: ";
	cin >> number;

	if (number == dato) {
		cout << "El numero es 5";
	}
	else {
		cout << "El numero es diferente de 5";
	}

	return 0;
}