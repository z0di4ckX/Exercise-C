#include <iostream>

using namespace std;

int main() {
    int numero;

    cout << "Escribe un numero: ";
    cin >> numero;

    if(numero % 2 == 0) {
        cout << "El numero es par" << endl;
    }
    else {
        cout << "El numero no es par" << endl;
    }

    return 0;
}