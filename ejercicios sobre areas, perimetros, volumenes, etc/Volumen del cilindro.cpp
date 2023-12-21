#include <iostream>

using namespace std;

int main(){
    int altura,radio,volumen;
    cout<<"La altura es: "<<endl;
    cin>>altura;
    cout<<"el radio es: "<<endl;
    cin>>radio;
    volumen=3.1416*(radio*radio)*altura;
    cout<<"El volumen del cilindro es: "<<volumen<<endl;
    
    return 0;
    
}