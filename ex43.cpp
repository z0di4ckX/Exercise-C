#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main() {
    char cad[] = "JUAN";
    char cad1[] = "ALEJGANDRO";

    strlwr(cad); // convierte a minuscula el nombre juan
    strlwr(cad1);

    cout << cad << cad1 << endl;
    getch();
    return 0;
}