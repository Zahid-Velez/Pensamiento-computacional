#include <iostream>
using namespace std;
int main ()
{
    int operación, a, b;
    cout<<"1 = Suma"<<endl;
    cout<<"2 = Resta"<<endl;
    cout<<"3 = Multiplicación"<<endl;
    cout<<"4 = División"<<endl;
    cin>>operación>>a>>b;
    switch (operación) {
    case 1:
        cout<<a+b;
        break;
    case 2:
        cout<<a-b;
        break; 
    case 3:
        cout<<a*b;
        break;
    case 4:
        cout<<a/b;
        break;
    default:
        cout<<"Error";
        break;    
    }
    return 0;  
}      