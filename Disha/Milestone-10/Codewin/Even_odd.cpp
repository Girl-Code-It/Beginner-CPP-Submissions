using namespace std;
#include<iostream>
 int even_odd(int num)
 {
     if(num%2==0)
        return 1;
     else
        return 0;
 }
int main()
{
    long long num;
    cout<<"\n Enter a number :";
    cin>>num;

    if(even_odd(num)==1)
    {
        cout<<"\n Number is even";
    }
    else
    {
        cout<<"\n Number is odd";
    }
    return 0;
}
