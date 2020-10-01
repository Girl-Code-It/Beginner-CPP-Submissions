#include <iostream>

using namespace std;

int main()
{
    int num,i,prime=1,j;

    cout<< "Enter a number :\n";
    cin>>num;

    for(i=2 ; i<num ; i++)
    {

        if(num%i==0)
        {
            prime=1;


           for(j=2 ; j<i ; j++)
           {
               if(i%j==0)
               {
                   prime=0;
                   break;
               }

            }
            if(prime==1)
            cout<<i<<endl;
        }

    }

    return 0;
}
