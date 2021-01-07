
#include<iostream>
using namespace std;
int main ()
{
     int k=0;
    for (int i=0; i<9;i++)
    {
        i<=4?k++:k--;
        if (i==0)
          {
              k=0;
          }

        for (int j=0;j<9;j++)
        {
           if ((j>(4-k)) && (j<(4+k)))
           {
               cout<<" ";
            }

           else
           {
               cout<<"*";
           }

        }
        cout<<endl;
    }
    return 0;
}
