#include <bits/stdc++.h>
using namespace std;
int i;
long int checkPrime(int num){
    if(i==1){
        return 1;
    }
     if(num%i==0){
         return 0;
     }
     else{
         i=i-1;
         return checkPrime(num);  
         }
}
int main() {
    int num,prime;
    cin>>num;
    i = num/2;
    prime = checkPrime(num);
    if(prime==1)
        cout<<num<<" is prime";
    else
        cout<<num<<" is not prime";
    return 0;
}

//input = 7
//output is prime
