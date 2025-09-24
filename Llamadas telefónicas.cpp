#include <iostream>
using namespace std;
int main ()
{
    int CLAVE, MINUTOS;
    cout<<"CLAVE      ZONA             PRECIO"<<endl;
    cout<<" 12    AMÉRICA DEL NORTE      2"<<endl;
    cout<<" 15    AMÉRICA CNETRAL       2.2"<<endl;
    cout<<" 18    AMÉRICA DEL SUR       4.5"<<endl;
    cout<<" 19    EUROPA                3.5"<<endl;
    cout<<" 23    ASIA                   6"<<endl;
    cout<<" 25    ÁFRICA                 6"<<endl;
    cout<<" 29    OCEANÍA                5"<<endl;
    cin>>CLAVE;
    switch (CLAVE) {
    case 12:
        cin>>MINUTOS;
        cout<<MINUTOS*2;
        break;
    case 15:
        cin>>MINUTOS;
        cout<<MINUTOS*2.2;
        break; 
    case 18:
        cin>>MINUTOS;
        cout<<MINUTOS*4.5;
        break;
    case 19:
        cin>>MINUTOS;
        cout<<MINUTOS*3.5;
        break;
    case 23:
        cin>>MINUTOS;
        cout<<MINUTOS*6;
        break;
    case 25:
        cin>>MINUTOS;
        cout<<MINUTOS*6;
        break;
    case 29:
        cin>>MINUTOS;
        cout<<MINUTOS*5;
        break;                
    default:
        cout<<"Opción Inválida";
        break;    
    }
    return 0;  
}      