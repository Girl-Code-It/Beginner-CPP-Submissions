#include <iostream>
using namespace std;

//call by reference or pass by reference
void passByReference(int &x,int &y){
int z = x;
x = y;
y = z;
}
int main() {
    int a=5,b=6;
    cout<<"Before swapping"<<endl<<"a: "<<a<<endl<<"b: "<<b<<endl<<endl;
    //call function
    passByReference(a,b);
    cout<<"After swapping"<<endl<<"a: "<<a<<endl<<"b: "<<b<<endl<<endl;
    return 0;
}
