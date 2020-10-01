#include <iostream>
using namespace std;

int main()
{
    int y;

    cout<<"\n Enter year: ";
    cin>>y;

    if(y%4==0)
        cout<<"\n It is a leap year.";
    else
        cout<<"\n It is not a leap year.";
}
