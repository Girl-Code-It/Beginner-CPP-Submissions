#include <bits/stdc++.h>
using namespace std;

long int calculatePower(int num, int power){
    long int result=1;
    if(power==0)
        return result;
    result = num*calculatePower(num,power-1);
    return result;
}
int main() {
    int num,power;
    cin>>num>>power;
    cout<<calculatePower(num,power);
}


//input 2 6
//output 64
