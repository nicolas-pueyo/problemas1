#include <iostream>
#include <iomanip>
using namespace std;
const int NUM_MESES = 12;

double calculo(const double t[]) {
double suma = 0;
for(int i = 0; i<NUM_MESES; i++) {
    suma = suma + t[i];
}
double media = suma/NUM_MESES;
return media;
}


int main() {
    double t[NUM_MESES];
    for(int i = 0; i < NUM_MESES; i++) {
        cout << "Introduzca la temperatura de "<< i+1 << ":";
        cin >> t[i];
    }
    cout << fixed << setprecision(2) << "La temperatura media es " << calculo(t);

}