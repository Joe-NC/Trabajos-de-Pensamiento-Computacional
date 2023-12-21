#include <iostream>

using namespace std;

int main() {
    
    int sumatoria = 0;

    for (int i = 0; i <= 100; i += 3) {
    sumatoria += i;
    }
    cout << "La sumatoria de los multiplos de 3 encontrados del 0 al 100 es: " << sumatoria << endl;

    return 0;
}
