#include<iostream>
#include<stdio.h>
using namespace std;
void m(int);
int main()
{
    int i=1;
    m(i);
    return 0;
}
void m(int i)
{
    if(i<=10)
    {
        cout<<"15*"<<i<<"="<<15*i<<endl;
        m(i+1);
    }
    else
        cout<<" ";

}
