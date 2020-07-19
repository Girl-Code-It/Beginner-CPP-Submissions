using namespace std;
#include<iostream>
int main()
{
    for(int i=1;i<=7;i++)
    {
        for(int j=1;j<=7;j++)
        {
             if(i==1 || i==7)
             {
                 cout<<"*";
             }

             else if(i==2 || i==6)
             {
                 if(j==1 || j==7)
                 {
                     cout<<"*";
                 }
                 else
                 {
                     cout<<" ";
                 }
             }

             else if(i==3 || i==5)
             {
                 if(j==1 || j==7 ||(j>=3 && j<=5))
                 {
                     cout<<"*";
                 }
                 else
                 {
                     cout<<" ";
                 }
             }
            else
            {
                if(j%2!=0)
                {
                    cout<<"*";
                }
                else
                {
                    cout<<" ";
                }
            }

         }
     cout<<endl;
    }



    return 0;
}

