#include<iostream>
using namespace std;

int main()
{
    float l,b;
    cout<<"\n Enter length of the rectangle: ";
    cin>>l;
    cout<<"\n Enter breadth of the rectangle: ";
    cin>>b;

    if(l==b)
        cout<<"\n It is a square.";
    else
        cout<<"\n It is not a square.";
    return 0;
}
