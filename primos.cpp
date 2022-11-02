#include <iostream>
using namespace std;

int main() {
    cout << "Intorudzca un numero positivo: ";
    unsigned numero;
    cin >> numero;


    if (numero == 2) {
        cout << "El numero es 2 y es primo" << endl;
        }
        else if (numero < 2 || numero%2 == 0) {
            cout << "El número " << numero << " no es primo.";
            }
                else {
                    unsigned divisor = 3;
                    bool encontrado = false;
                    while (!encontrado && divisor*divisor <= numero) {
                            encontrado = numero%divisor == 0;
                            divisor = divisor + 2;
                        }
                    if (encontrado == true) {
                        cout << "El numero " << numero << " no es primo" << endl;
                    }
                        else {
                            cout << "El numero " << numero << " es primo" << endl;
                        }
                 }
}
