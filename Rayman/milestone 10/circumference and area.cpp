#include <iostream>
using namespace std;
double circumference(double r)
{
    return(2*3.14*r);
}
double area(double r)
{
    return(3.14*r*r);
}

int main()
{
    double r;
    cout<<"input radius of a circle : ";
    cin>>r;
    cout<<"Circumference of the circle : "<<circumference(r)<<endl;
    cout<<"Area of the circle : "<<area(r)<<endl;
}


