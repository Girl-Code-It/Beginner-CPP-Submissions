#include <iostream>

using namespace std;

int main()
{
    int i,j,x,lastdigit,num;
    long int fact,sum;


    cout<< "Enter a number : ";
    cin>>num;

    cout<< "Strong numbers between 1 to "<<num<< "are \n";

    for(i=1;i<=num;i++)
    {
        x = i;
        sum = 0;
        while(x>0)
        {
            fact = 1;
            lastdigit = x%10;

            for(j=1;j<=lastdigit;j++)
            {
                fact = fact*j;


            }

            sum+=fact;
            x = x/10;

        }
        if(sum==i)
            cout<<i<<",";

    }


    return 0;
}
