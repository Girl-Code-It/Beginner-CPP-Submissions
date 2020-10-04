#include <iostream>
using namespace std;
int findGCD(int n1,int n2){
    return n2==0?n1:findGCD(n2,n1%n2);
}
int main() {
    int n1,n2;
    cin>>n1>>n2;
    cout<<findGCD(n1,n2);
}

//input= 9 3
//output=3
