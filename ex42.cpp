#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main() {
    char cad[] = "Pablo";

    strrev(cad); // inverdir el nombre Pablo

    cout << cad << endl;
    getch();
    return 0;
}