#include <iostream>
#include <string.h>
using namespace std;

int main()
{
//answer 7
    int a;
    cout<<"enter the no.";
    cin>>a;
    if(a<0){
        cout<< a*(-1);
    }
    else {
        cout<<a;
    }
    return 0;
}