// TO PRINT  SUM OF ALL  ODD NATURAL NUMBERS TILL 'N'
#include<iostream>
using namespace std;
int main()
{
    int i=1,n,SUM=0;
    cout<<"UPTO HOW MUCH NUMBER DO YOU WANT TO ADD  THE ODD  NATURAL NUMBERS \n";
    cin>>n;


    while(i<=n)
    {


        if(i%2!=0)
        {

        SUM+=i;
    }
    i++;
    }
    cout<<"THE SUM IS "<<SUM;
    return 0;

}


