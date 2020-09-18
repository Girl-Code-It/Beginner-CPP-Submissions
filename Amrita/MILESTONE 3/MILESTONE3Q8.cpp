#include<iostream>
using namespace std;
int main ()
{
    int digit,i,j,n,ctr;
    cout<<"ENETR THE DIGIT \n";
    cin>>digit;
    for (i=0;i<10;i++)
    {
        cout<<"\nThe frequency of "<<i<<"=" ;
        ctr=0;
        for(j = digit;j > 0;j = j/10)
        {
            n = j%10;
            if(n == i)
              {

                ctr++;

              }

        }
        cout<<ctr<<endl;

    }

    return 0;
}
