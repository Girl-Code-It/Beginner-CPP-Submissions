#include <iostream>

using namespace std;

int main()
{
    int num,sum,i,j;

    cout<< "Enter a number :";
    cin>>num;

    cout<< "The perfect numbers between 1 to "<<num<< " are :\n";

    for(i=1;i<num;i++)
    {
        sum = 0;

        for(j=1;j<i;j++)
        {
            if(i%j==0)
            {
                sum = sum+j;
            }


        }
        if(sum==i)
           {
              cout<<i<<endl;
           }


    }
    return 0;
}
