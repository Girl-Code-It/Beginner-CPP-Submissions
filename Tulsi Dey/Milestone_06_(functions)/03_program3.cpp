/*
Write a program to print the circumference and area of a circle 
of radius entered by user by defining your own function.

*/
#include <iostream>

using namespace std;

double getCir(int r)
{
    return 2.0*3.14*(double)r;
}
double getArea(int r)
{
    return 3.14*(double)r*(double)r;
}
int main()
{
    int r;
    cout<<"Enter radius of circle: "; cin>>r;

    printf("\nCircumference of  circle is %f",getCir(r));
    printf("\nArea of  circle is %f",getArea(r));
    return 0;
}