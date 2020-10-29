#include <iostream>
using namespace std;

int sum(int a,int b,int c=0,int d=5){
    return (a+b+c+d);
}

int main() {
    cout<<"Sum of 1,2,3,4 is: "<<sum(1,2,3,4)<<endl;
    cout<<"Sum of 1,2,0,5 is: "<<sum(1,2);
    return 0;
}
