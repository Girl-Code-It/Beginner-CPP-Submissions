#include<iostream>
using namespace std;
int main ()
{

    for (int i=0; i<7;i++)
    {
        for (int j=0;j<7;j++)
        {
           if (j==i || j==6-i)
           {
                if(i==j)
                    cout<<"\\";
                else
                    cout<<"/";
           }

           else
           {
               cout<<".";
           }
        }
        cout<<endl;
    }
    return 0;
}
