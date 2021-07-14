#include <iostream>
using namespace std;
int f[50];
int fib(int n)
{    
     if(f[n] != -1)
        return f[n];
 
   f[n] = fib(n-2)+ fib(n-1);
   cout<<f[n]<<" ";
   return f[n];
}

int main(void){
    for(int i =0;i<50;i++)
     f[i]= -1;
     
     f[0]=0;f[1]=1;
     cout<<"0 1 ";
     fib(10);
    
}
