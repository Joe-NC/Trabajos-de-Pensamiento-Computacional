#include <iostream>

using namespace std;

int main() {
    
    int numero;
    cout << "Ingresa un numero entero positivo: ";
    cin >> numero;

    
    if (numero <= 0) {
    cout << "Por favor, ingresa un numero entero positivo." << endl;
    return 1;
    }

    for (int i = numero; i <= 2 * numero - 1; ++i) {
    cout << i << " ";
    }

    cout << endl;

    return 0;
}
