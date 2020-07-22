using namespace std;
#include<iostream>
#define PI 3.14

int circle(int r)
{
    cout<<"\n Circumference of circle of radius "<<r<<" is :"<<2*PI*r;
    cout<<"\n Area of circle of radius "<<r<<" is :"<<PI*r*r;
}
int main()
{
    int radius;
    cout<<"\n Enter the radius of circle :";
    cin>>radius;
    circle(radius);
    return 0;
}
