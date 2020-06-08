#include <iostream>

using namespace std;

int main()
{
    int num;

    cout<<"Enter a number: ";

    cin>>num;

    if(num>0)
        cout<<"The absolute value is "<<num;
    else if(num<0)
        cout<<"The absolute value is "<<num*(-1);
    else
        cout<<"The number entered is zero";


    return 0;
}
