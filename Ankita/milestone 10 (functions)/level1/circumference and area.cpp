#include <iostream>
using namespace std;
void circum (int r)
{
    cout << "Circumference of a circle whose radius is " << r << " = " << 2*3.14*r;
}
void area (int r)
{
    cout << "Area of a circle whose radius is " << r << " = " << r*r;
}
void dia (int r)
{
    cout << "Diameter of a circle whose radius is " << r << " = " << 2*r;
}
int main ()
{
    int r;
    cout << "Enter radius: ";
    cin >> r;
    circum (r);
    cout << "\n";
    area (r);
    cout << "\n";
    dia (r);
}
