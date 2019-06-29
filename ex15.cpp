#include <iostream>

using namespace std;

int main() {
    int edad;

    cout << "Escribe tu edad: ";
    cin >> edad;

    if((edad >= 18) && (edad <= 25)) {
        cout << "Su edad esta en el ragno de  [18-25]" << endl;
    }
    else {
        cout << "Su edad no esta en el rango de [18-25]" << endl;
    }

    return 0;
}