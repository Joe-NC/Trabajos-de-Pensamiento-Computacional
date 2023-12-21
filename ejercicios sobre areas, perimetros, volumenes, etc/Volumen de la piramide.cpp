#include <iostream>

using namespace std;

int main(){
    int areaBase,altura,volumen;
    cout<<"El area de la base de la piramide es: "<<endl;
    cin>>areaBase;
    cout<<"La altura es: "<<endl;
    cin>>altura;
    volumen=areaBase*altura/3;
    cout<<"El volumen de la piramide es: "<<volumen<<endl;
    
    return 0;
    
}