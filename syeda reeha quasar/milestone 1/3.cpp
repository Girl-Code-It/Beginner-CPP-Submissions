#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    //answer 3
    int a;
    int b=100;
    cout<<"cost of each unit is 100 enter the quantity u want to purchase"<<endl;
    cin>>a;
    cout<<"the total cost is ";
    int c;
    float d;
    c = a*b;
    d= c-0.1*c;
    if(c>1000){
        cout<< d;
    }
    else{
        cout<<c;
    }
    return 0;
}