#include <iostream>
using namespace std;

//programa que pide dos enteros al usuario y escribe en pantalla su máximo común divisor y su mínimo común múltiplo

//Pre -------
//Post devuelve |x|
unsigned absoluto(int x) {
	if (x < 0) {
	x = -x;
    }
	return x;
}
//Pre a=!0 %% b=!0
//Post devuelve el mcd(a,b)

unsigned mcd(unsigned a, unsigned b) {

	while (b !=  0) {
	unsigned resto = a%b;
	a=b;
	b=resto;
    }
	return a;
}

//Pre a!=0 && b!=0
//Post devuelve el mcm(a,b)
unsigned mcm(unsigned a, unsigned b) {		// ab = mcm(a,b)*MCD(a,b)
	return a*b/mcd(a,b);
}

int main() {

	cout << "Escriba dos enteros: ";
	int n1,n2;
	cin >> n1 >> n2;
	if (n1 == 0 && n2 == 0) {
	cout << "No se puede calcular el mcd de dos 0";
	return 1;
	}
	else {
	n1 = absoluto(n1);
	n2 = absoluto(n2);
    if (n1 > n2) {
	cout << "MCD: " << mcd(n1,n2) << endl;
	cout << "mcm: " << mcm(n1,n2) << endl;
	return 0;
	}
    else {
    cout << "MCD: " << mcd(n2,n1) << endl;
	cout << "mcm: " << mcm(n2,n1) << endl;    
    }
}
}