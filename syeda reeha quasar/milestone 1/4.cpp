#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    //answer 4
    int a,b;
    float c;
    cout<<"enter your salary"<<endl;
    cin>>a;
    cout<<"enter your years of service"<<endl;
    cin>>b;
    c= a + 0.05*a;

    if(b>5){
        cout<<"your salary will be increased"<<endl;
        cout<<"now your salary is "<<c;
    }
    else{
        cout<<"you didn't get increment"<<endl;
        cout<<"your salary is "<<a;
    }
    return 0;
}