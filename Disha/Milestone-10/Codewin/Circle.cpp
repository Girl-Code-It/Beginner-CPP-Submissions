using namespace std;
#include<iostream>
#define pi 3.14

double circle(double r)
{
    cout<<"\n Diameter of circle is ="<<2*r;
    cout<<"\n Circumference of circle is ="<<2*pi*r;
    cout<<"\n Area of circle is ="<<pi*r*r;
}
int main()
{
    float radius;
    cout<<"\n Enter the radius of circle :";
    cin>>radius;
    circle(radius);
    return 0;
}
