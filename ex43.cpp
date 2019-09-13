#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main() {
    char cad[] = "JUAN";

    strlwr(cad); // convierte a minuscula el nombre juan

    cout << cad << endl;
    getch();
    return 0;
}