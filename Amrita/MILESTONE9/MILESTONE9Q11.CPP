
#include<iostream>
using namespace std;
int main ()

{
   int k=1;
   int i;
    for ( i=0; i<4;i++)
    {


        for (int j=0;j<7;j++)
        {
            if((j>=0) && j<=(6-2*i))
            {
                cout<<(j+1);



            }
            else
                cout<<" ";
        }

        cout<<endl;
    }
}



