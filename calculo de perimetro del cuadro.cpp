#include <iostream>
using namespace std;

int main() {
    double lado;
    double perimetro;

    cout << "Ingrese la longitud de un lado del cuadrado: ";
    cin >> lado;

    perimetro = 4 * lado;

    cout << "El perímetro del cuadrado es: " << perimetro << endl;

    return 0;
}