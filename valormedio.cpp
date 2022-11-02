#include <iostream>
using namespace std;
const int FIN = 0;

//Programa que pide al usuario una secuencia de datos y calcula el valor medio de ellos.
//La secuencia termina en cero.
int main() {
    double accum = 0;
    unsigned num_elementos = 0;
    double num;

    cout << "Escriba una secuencia de reales terminada en 0: ";
    do {
        cin >> num;
        if(num != 0) {
            accum +=num;
            num_elementos++;
        }
    }
    while(num != 0);
    double media = accum / num_elementos;
    if (num_elementos > 0) {


    cout << "La media es: " << media;
    }
    else {
    cout << "La media es " << media;
    }
}