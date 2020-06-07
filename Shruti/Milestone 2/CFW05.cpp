#include<iostream>
using namespace std;

int main()
{
    int i=1;
    cout<<"\n All odd numbers between 1 to 100 are:\n ";

    while(i <= 100)
    {
        if(i%2!=0)
        {
            cout<<i<<" ";
            i++;
        }
        else
        {
            i++;
        }
    }

    return 0;
}
