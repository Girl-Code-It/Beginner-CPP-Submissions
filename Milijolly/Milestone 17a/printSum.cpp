// code to print sum of numbers from 1 to n
#include <iostream>
using namespace std;

int sum=0;
int psum(int n)
{ 
    if(n==1)
     {   
         return 1;
     }
    return n+psum(n-1);
}

int main(void){
    // Here your code !
    int res =psum(5);
    cout<<res;
}
