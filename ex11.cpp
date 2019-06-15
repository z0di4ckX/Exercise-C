#include <iostream>

using namespace std;

int main() {
    int n1, n2;

    cout << "Digite dos numero: ";
    cin >> n1 >> n2;

    if (n1 == n2) {
        cout << "Ambos numeros son iguales" << endl;
    }
    else if (n1 > n2) {
        cout << "El mayor es: " << n1 << endl;
    }
    else {
        cout << "El meyor es: " << n2 << endl;
    }

    return 0;
}