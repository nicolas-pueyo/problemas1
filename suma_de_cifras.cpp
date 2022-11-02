#include <iostream>
using namespace std;

int main() {

cout << "Introduzca un numero" << endl;
int numero;
cin >> numero;
unsigned cifra = 0;
    while (numero > 0) {
        cifra = cifra + numero%10;
        numero = numero / 10;
    }
cout << "La suma de las cifras es: " << cifra << endl;
}