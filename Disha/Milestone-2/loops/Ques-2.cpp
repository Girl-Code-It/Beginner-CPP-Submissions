//Write a C program to print all natural numbers in reverse (from n to 1). - using while loop
using namespace std;
#include<iostream>
int main()
{
    int i,n;
    cout<<"\n Enter the length of series :";
    cin>>n;
    i=n;
    while(i>0)
    {
        cout<<i<<endl;
        i--;
    }

    return 0;
}
