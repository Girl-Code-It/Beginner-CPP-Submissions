#include <iostream>
using namespace std;
int fact(int num)
{
    int factorial=1;
    for(int i=1; i<=num; i++)
    {
        factorial*=i;
    }
    return factorial;
}

int main()
{
    int num;
    cout<<"input a number : "<<endl;
    cin>>num;
    cout<<"factorial of "<<num<<" : "<<fact(num);
}

