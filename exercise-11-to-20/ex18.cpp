#include <iostream>

using namespace std;

int main() {
    int saldoInicial = 1000, opcion;
    float extra, saldo = 0, retiro;

    cout << "\tBienvenido a su Cajero Automatico" << endl;

    cout << "1. Ingresar dinero en cuenta" << endl;
    cout << "2. Retirar dinero de la cuenta" << endl;
    cout << "3. Salir" << endl;
    cout << "Opcion: ";
    cin >> opcion;

    switch (opcion){
    case 1:
        cout << "Escriba la cantidad de dinero a ingresar: ";
        cin >> extra;
        saldo = saldoInicial + extra;
        cout << "Dinero en cuenta: " << saldo; 
        break;
    case 2:
        cout << "Escriba la cantidad de dinero que va a retirar: ";
        cin >> retiro;

        if(retiro > saldoInicial) {
            cout << "No tiene esa cantidad de dinero" << endl;
        }
        else {
            saldo = saldoInicial - retiro;
            cout << "Dinero en cuenta: " << saldo;
        }
        break;
    
    case 3:
        break;
    }

    return 0;
}