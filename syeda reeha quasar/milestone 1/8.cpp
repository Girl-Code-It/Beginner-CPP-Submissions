#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    // answer 8
            int a,b;
        cout<<" enter your Number of classes held"<<endl;
        cin>> a ;
        cout<<" enter your Number of classes attended"<<endl;
        cin>> b ;
        float c,d;
        d= (1.0) * b/a ;
        c= d*100;
        cout<<"your attendence is "<<c<<endl;
        if(c>=75){
    cout<<"you are elligible to give exam";
        }
        else{
            cout<<"you are not elligible to sit in exam";
        }
    return 0;
}