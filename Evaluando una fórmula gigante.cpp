/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double x, y, z, A;
    cin>>x;
    cin>>y;
    cin>>z;
    A=(((2*x+y)/z)*(pow(y,3)-z))/(((x+2*y+3*z)/(z-2*y-3*x))+pow(x,2)+pow(z,2));
    cout<<A;

    return 0;
}