#include<iostream>
#include<stdio.h>
using namespace std;
void circle(float);
int main()
{
    float r;
    cout<<"Enter the radius : "<<endl;
    cin>>r;
    circle(r);
    return 0;
}
void circle(float x)
{
    cout<<"Circumference is : "<<2*3.14*x<<endl;
    cout<<"Area is : "<<3.14*x*x;
}
