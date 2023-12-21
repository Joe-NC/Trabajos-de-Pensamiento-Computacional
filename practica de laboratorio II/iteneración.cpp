#include <iostream>

using namespace std;

int main() {
    
    int cantidad_iteraciones;
    cout << "Ingrese la cantidad de veces que desea iterar: ";
    cin >> cantidad_iteraciones;

    double suma_numeros = 0;
    
    for (int i = 0; i < cantidad_iteraciones; ++i) {
        double numero;
        cout << "Ingrese el numero " << i + 1 << ": ";
        cin >> numero;

        suma_numeros += numero;
    }

    cout << "\nLa suma de los numeros ingresados es: " << suma_numeros << endl;

    return 0;
}