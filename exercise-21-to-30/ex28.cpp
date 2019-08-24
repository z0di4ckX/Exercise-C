#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main() {
    int numero, dato, contador = 0;

    srand(time(NULL));

    dato = 1 + rand() % (100);

    do {
        cout << "Escriba un numero: ";
        cin >> numero;
        
        if(numero > dato) {
            cout << "\nEscriba un numero menor\n";
        }

        if(numero < dato) {
            cout << "\nEscriba un numero mayor\n";
        }

        contador++;

    }while(numero != dato);

    cout << "FELICIDADES HAS ADIVINADO EL NUMERO" << endl;
    cout << "============================================" << endl;
    cout << "EL NUMERO DE INTENTOS FUERON: " << contador << endl;

    system("pause");
    
    return 0;
}