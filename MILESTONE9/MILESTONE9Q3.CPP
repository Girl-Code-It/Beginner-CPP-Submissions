#include<iostream>
using namespace std;
int main ()

{
   int k;
    for (int i=0; i<5;i++)
    {
        k=1;

        for (int j=0;j<5;j++)
        {
            if(i+j<=4)
            {
                cout<<k;
                k++;

            }
            else
                cout<<" ";
        }
        cout<<endl;
    }
}

