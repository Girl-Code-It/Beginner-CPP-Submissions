#include<iostream>
using namespace std;
int main ()
{
    int num;
    int count ;
    cout<<"ENTER THE NUMBER YOU WANT TO CHECK IS PRIME OR NOT \n";
    cin>>num;
    for (int i=2; i<num/2;i++)
    {
        if (num%i==0)
           {

               count++;
           }
    }
    if (count>2)
        cout<<"IT IS NOT A PRIME NUMBER \n";
    else
        cout<<"IT IS   A PRIME NUMBER \n";
    return 0;
}
