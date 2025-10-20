#include <iostream>
using namespace std;
int main(){
   int n, i, j;
   cin>>n;
   for (i=1;i<=n;i++) {
      cout<<"Múltiplos de "<<i<<": "<<endl;
      for (j=1;j<=n;j++){
      cout<<i<<" × "<<j<<" = "<<i*j<<endl;
      }
   }
   return 0;
}