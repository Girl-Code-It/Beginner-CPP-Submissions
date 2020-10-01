#include<iostream>
using namespace std;

int main()
{
    long int s;
    int y;
    cout<<"\n Enter your salary: ";
    cin>>s;
    cout<<"\n Enter your year of service: ";
    cin>>y;

    if(y>5)
        cout<<"\n Your bonus is: "<<(0.05*s);
    else
        cout<<"\n No bonus.";
    return 0;
}


