#include <iostream>

using namespace std;

int main() {
    
    int sumatoria = 0;

    for (int i = 0; i <= 100; ++i) {
    sumatoria += i;
    }

    cout << "La sumatoria de los numeros del 0 al 100 es: " << sumatoria << endl;

    return 0;
}
