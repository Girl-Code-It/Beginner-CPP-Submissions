#include <iostream>
using namespace std;
void circle(double r);

int main()
{
    double r;
    cout<<"input radius of a circle : ";
    cin>>r;
    circle(r);
}
void circle(double r)
{
    cout<<"Diameter of the circle : "<<2*r<<endl;
    cout<<"Circumference of the circle : "<<2*3.14*r<<endl;
    cout<<"Area of the circle : "<<3.14*r*r<<endl;
}
