// PROGRAM TO FIND FACTORIAL OF A NUMBER USING FUNCTIONS

#include<iostream>
using namespace std;

void fact(int n)
{
    int fact=1;
    for (int i=1;i<=n;i++)
    {
        fact*=i;
    }

    cout<<"THE FACTORIAL OF THE NUMBER IS "<<fact;
}

int main ()
{
    int num;
    cout<<"ENTER THE NUMBER :";
    cin>>num;
    fact(num);
    return 0;
}
