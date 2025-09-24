#include <iostream>
using namespace std;
int main ()
{
    int área, lado, base, altura;
    cout<<"1 : Cuadrado"<<endl;
    cout<<"2 : Rectángulo"<<endl;
    cout<<"3 : Triángulo"<<endl;
    cout<<"4 : Salir"<<endl;
    cin>>área;
    switch (área) {
    case 1:
        cin>>lado;
        cout<<lado*lado;
        break;
    case 2:
        cin>>base>>altura;
        cout<<base*altura;
        break; 
    case 3:
        cin>>base>>altura;
        cout<<(base*altura)/2;
        break;
    case 4:
        cout<<"Adiós";
        break;
    default:
        cout<<"Opción Inválida";
        break;    
    }
    return 0;  
}      