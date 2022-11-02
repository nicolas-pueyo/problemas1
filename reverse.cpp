#include <iostream>
using namespace std;

int main() {
cout << "Introduzca un numero natural: ";
unsigned n;
cin >> n;
double vector[n];
while (int i = 0; i < n; i++)
cin >> vector[i];
inversor(vector, n);
}

void inversor(double& vector, const unsigned n) {
int j = n;
while(j >= 0; j--) {
    cout << vector[j];
}
}