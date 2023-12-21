#include <iostream>

using namespace std;

int main(){
    int altura,radio,volumen;
    cout<<"La altura es: "<<endl;
    cin>>altura;
    cout<<"El radio es: "<<endl;
    cin>>radio;
    volumen=3.1416*(radio*radio)*altura/3;
    cout<<"El volumen del cono es: "<<volumen<<endl;
    
    return 0;
    
}