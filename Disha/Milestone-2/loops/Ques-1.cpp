//Write a C program to print all natural numbers from 1 to n. - using while loop

using namespace std;
#include<iostream>
int main()
{
    int i=1,n;
    cout<<"\n Enter the last number of the series :";
    cin>>n;

    while(i<=n)
    {
        cout<<i<<endl;
        i++;
    }

    return 0;
}
