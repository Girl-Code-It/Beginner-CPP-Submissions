#include<iostream>
#include<cstdlib>
#define PI 3.14

using namespace std;

float area(int);
float circum(int);

int main()
{
    int r;
    cout << "Enter the radius of circle to get circumfearance and area " << endl;

    cin >> r;

    cout << "Area of given circle is " << area(r) << " Units" << endl;

    cout << "Circumfearance of given circle is " << circum(r) << " Units" << endl;

}

float area(int rad)
{
    return (PI * rad * rad);
}

float circum(int rad)
{
    return (2 * PI * rad);
}
