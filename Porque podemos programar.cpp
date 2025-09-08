/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;
int main()
{
    float x, a, y;
    cin>>x;
    a=(x+(x*x))/(5*x)+3;
    y=(a+x)*(a/(a+(2*x)));
    cout<<y;

    return 0;
}