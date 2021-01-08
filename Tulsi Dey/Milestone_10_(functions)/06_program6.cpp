/*
A person is elligible to vote if his/her age is greater than or equal to 18. 
Define a function to find out if he/she is elligible to vote.

*/
#include <iostream>
using namespace std;

bool isEli(int a)
{
    return a >= 18;
}
int main()
{
    int a;
    cout<<"Enter your age: "; cin>>a;

    if(isEli(a)) cout<<"You can vote"<<endl;
    else cout<<"You cannot vote"<<endl;
    return 0;
}