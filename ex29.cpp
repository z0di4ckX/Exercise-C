#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

int main() {
    char can[] = "123.456";
    float numero;

    numero = atof(can);

    cout << numero << endl;

    getch();
    return 0;
}