//Write a C program to print all ASCII character with their values.
using namespace std;
#include<iostream>
int main()
{
    cout<<" ASCII charachers with their respective values:"<<endl;
    for(int i=0;i<=255;i++)
    {
        cout<<i<<"="<<char(i)<<"\t";
    }
    return 0;
}
