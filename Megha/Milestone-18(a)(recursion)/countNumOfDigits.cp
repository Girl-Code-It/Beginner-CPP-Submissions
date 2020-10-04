#include <iostream>
using namespace std;
int noOfDigit(int n){
    static int count=0;
    if(n!=0){
        count++;
        noOfDigit(n/10);
    }
    return count;
}
int main() {
    int n=50,count;
    count = noOfDigit(n);
    cout<<count<<" ";
}

//output=2
