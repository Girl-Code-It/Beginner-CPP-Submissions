#include <iostream>
using namespace std;

int main()
{
    int m;
    cout<<"\n Enter your marks: ";
    cin>>m;

    if((m>=0)&&(m<=25))
        cout<<"\n Your grade is F";
    else if((m>25)&&(m<=45))
        cout<<"\n Your grade is E";
    else if((m>45)&&(m<=50))
        cout<<"\n Your grade is D";
    else if((m>50)&&(m<=60))
        cout<<"\n Your grade is C";
    else if((m>60)&&(m<=80))
        cout<<"\n Your grade is B";
    else if((m>80)&&(m<=100))
        cout<<"\n Your grade  is A";
    else
        cout<<"\n Wrong entry.";
    return 0;
}
