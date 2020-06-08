#include <iostream>
#include <cmath>

using namespace std;


int main()
{
    int num,i,x,digits,j,sum=0,lastdigit;

    cout<< "Enter a number :\n";
    cin>>num;

    cout<< "Armstrong number between 1 to "<<num<< "are :\n";

    for(i=1;i<=num;i++)
    {
        sum = 0;
        x = i;
        digits = (int) log10(x) + 1;

        while(x>0)
        {
            lastdigit = x%10;

            sum = sum + ceil(pow(lastdigit,digits));

            x/=10;



        }
        if(i==sum)
            cout<<i<< ",";



    }



    return 0;
}
