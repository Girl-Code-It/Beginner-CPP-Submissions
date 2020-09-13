using namespace std;
#include<iostream>
int main()
{
    int k=1,len=1,m;
    for(int i=1;i<=5;i++)
    {

        if(i%2!=0)
        {
            for(int j=1;j<=len;j++)
            {
                if(j%2!=0)
                {
                      cout<<k;
                      k++;
                }
                else
                {
                     cout<<"*";
                }
            }
        }
        else
        {
            m=k+(i-1);
            for(int l=1;l<=len;l++)
            {
                if(l%2!=0)
                {
                      cout<<m;
                      m--;
                      k++;
                }
                else
                {
                     cout<<"*";
                }
            }
        }
        cout<<endl;
        len+=2;
    }
    return 0;
}
