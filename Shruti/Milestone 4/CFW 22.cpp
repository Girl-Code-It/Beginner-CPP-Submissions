#include <iostream>
using namespace std;

int main()
{
    int num;

    cout<<"\n Enter a number: ";
    cin>>num;

    cout<<"\n The factors of "<<num<<" are : ";

    int i;
    for(i=1; i<=num; i++)
    {
        if(num%i==0)
        {
            cout<<i<<" ";
        }
    }

    return 0;
}
