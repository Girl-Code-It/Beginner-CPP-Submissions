//Take values of length and breadth of a rectangle from user and check if it is square or not.
using namespace std;
#include<iostream>
int main()
{
    float l,b;

    cout<<"\n Enter length of rectangle:";
    cin>>l;

    cout<<"\n Enter breadth of rectangle:";
    cin>>b;

    if(l==b)
    {
        cout<<"\n Yes,It's a square";
    }
    else{
        cout<<"\n No,It's not a square";
    }

    return 0;
}
