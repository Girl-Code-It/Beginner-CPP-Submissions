#include <iostream>
using namespace std;

int main()
{
    int a,b,sum,c; 


    cout<<"Enter number";
    cin>>a;

    
    

    for(int i=0;i<2;i++)
    {
    b=a%10;
    a=a/10;
    }


    a=a/100;

    cout<<"second last digit is "<<b<<endl;
    cout<<"ist digit is "<<a<<endl;

    sum=a+b;

    cout<<sum;


    return 0;

}

