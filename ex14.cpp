#include <iostream>

using namespace std;

int main() {
    char letras;

    cout << "Escribe un caracter para una vocal: ";
    cin >> letras;

    switch (letras)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    cout << "Es una vocal minuscula";
    break;
    
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
    cout << "Es una vocla mayuscula";
    break;

    default:
        cout << "No es una vocal minuscula o mayuscula";
        break;
    }

    return 0;
}