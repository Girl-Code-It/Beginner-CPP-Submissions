//count the digits of a given number using recursion.
#include <iostream>
using namespace std;
int c=0;
int count(int n)
{ 
    if(n!=0)
     {   
        c++;
        count(n/10);
        //return c;
     }
    return c;
}

int main(void){
    // Here your code !
    int n;
    cin>>n;
    int res = count(n);
    cout<<res;
}
