#include <iostream>
using namespace std;
void check(int num);

int main()
{
    int num;
    cout<<"input a number : ";
    cin>>num;
    check(num);
}
void check(int num)
{
    if(num%2==0)
        cout<<num<<" is even.";
    else
        cout<<num<<" is odd.";
}
