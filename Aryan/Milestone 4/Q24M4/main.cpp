#include <iostream>

using namespace std;

int main()
{
    int x=1,num1,num2,hcf;

    cout<< "Enter the first number :\n";
    cin>>num1;

    cout<< "Enter the second number:\n";
    cin>>num2;

    while( x<=num1 && x<=num2)
    {
        if( num1%x==0 && num2%x==0 )
        {
            hcf=x;

        }

        x++;

    }

    cout<< "The HCF is "<<hcf<<endl;


    return 0;
}
