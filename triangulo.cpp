#include <iostream>
using namespace std;

int main() {

cout << "Introduzca la longitud de los 3 lados de un triangulo: " << endl;
double l1, l2, l3;
cin >> l1 >> l2 >> l3;
if (l1 <= 0 || l2 <= 0 || l3 <= 0) {
    cout << "No es un triángulo";
}
else if (l1 == l2 && l2 == l3) {
         cout << "El triangulo es equilatero" << endl;
}
    else if (l1 == l2 || l2 == l3 || l1 == l3) {
         cout << "El triangulo es isósceles." << endl;
}
        else {
            cout << "El triangulo es escaleno." << endl;
}
system("pause");
}
