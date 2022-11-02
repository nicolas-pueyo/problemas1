#include <iostream>
using namespace std;

int main() {

cout << "Introduzca un numero: ";
unsigned n;
cin >> n;
cout << "Los divisores de" << n << "son: " << endl;
int i = 1;
while (i <= n) {
    if (n%i == 0) {
        cout << i << endl;
    }
    else ;
    i++;

}

}