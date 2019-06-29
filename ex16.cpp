#include <iostream>

using namespace std;

int main() {
    int a, b, c, d = 4;

    cout << "Escribe un numero para a: ";
    cin >> a;

    cout << "Escribe un numero para b: ";
    cin >> b;

    cout << "Escribe un numero para c: ";
    cin >> c;

    if((a == d) || (b == d) || (c == d)) {
        cout << "El numero que escribio coincide con los que introducidos anteriormente." << endl;
    }
    else {
        cout << "El numero que escribiste no concide con los que introduciste." << endl;
    }

    return 0;
}