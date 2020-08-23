

#include <iostream>
using namespace std;
int main() {
   int X,Y,s,T;
   cin>>X>>Y>>s>>T;
   int count = 0;
   for(int i=X;i<=X+s;i++){
       for(int j=Y;j<=Y+s;j++)
           if((i+j)<=T)
           count++;
       
   }
   cout<<count;
   return 0;
}
