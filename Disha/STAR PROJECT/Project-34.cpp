using namespace std;
#include<iostream>
int main()
{
    int k=1,len=5,m=1,subtract;
    for(int i=1;i<=5;i++)
    {
        k=m;
        subtract=len;
        for(int j=1;j<=5;j++)
        {
            if(j<=i)
            {
                if(j==1)
                {
                    m=k;
                }
                cout<<k;
                k-=subtract;
                subtract++;

            }
            else
            {
                cout<<" ";
            }
        }
        cout<<endl;
        m+=len;
        len--;
    }
    return 0;
}
