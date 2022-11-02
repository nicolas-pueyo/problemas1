#include <iostream>
#include <cmath>
using namespace std;



unsigned mcd(int a, int b) {
    // Algoritmo de Euclides para el cálculo del mcd
    if (a < 0) {
        a = -a;
    }
    if (b < 0) {
        b = -b;
    }
    
    while (b != 0) {
        int resto = a % b;
        a = b;
        b = resto;
    }
    
    return a;
}


unsigned mcm(int a, int b) {
    if (a < 0) {
        a = -a;
    }
    if (b < 0) {
        b = -b;
    }
    unsigned multiplo;
    multiplo = (a*b)/mcd(a,b);
    return multiplo;
}


int main() {
cout << "Introduzca dos numeros enteros" << endl;
int a, b;
cin >> a >> b;
unsigned mcd = mcd(a,b);
unsigned mcm = mcm(a,b);
cout << "El mcd de los numeros es " << mcd << " y el mcm es " << mcm << "." << endl;
system("pause");
}