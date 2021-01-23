#include<iostream>
using namespace std;
int main()
{
    int length, breadth;
    cout<<"Enter length and breadth of rectangle: ";
    cin>>length>>breadth;
    if(length==breadth)
        cout<<"It is a Square.";
    else
        cout<<"It is not a square.";
}
