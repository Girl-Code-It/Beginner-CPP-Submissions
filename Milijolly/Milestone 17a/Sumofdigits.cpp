// find the sum of digits of a number using recursion.
#include <iostream>
using namespace std;
int c=0;
int count(int n)
{ 
    if(n==0)
     {   
        return 0;
        
     }
    return n%10 + count(n/10);
}

int main(void){
    // Here your code !
    int n;
    cin>>n;
    int res = count(n);
    cout<<res;
}
