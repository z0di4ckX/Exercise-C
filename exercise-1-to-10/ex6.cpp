#include <iostream>

using namespace std;

int main() {
	float a, b, c, d, res;

	cout << "Digite la nota final del primer alumno:\n";
	cin >> a;

	cout << "Digte la nota final del segundo alumno:\n";
	cin >> a;

	cout << "Digite la nota final del tercer alumno:\n";
	cin >> c;

	cout << "Digite la nota final de cuarto alumno:\n";
	cin >> c;

	res = a + b + c + d / 2;

	cout << "La nota final media de los cuatros alumno es: " << res << endl;

	return 0;
}
