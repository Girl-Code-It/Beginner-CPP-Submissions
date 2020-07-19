using namespace std;
#include<iostream>
int main()
{
    int k=1,l=0,n=0;
    for(int i=1;i<=21;i++)
    {
        if(n==10)
        {
            l=0;
        }
        else
        {
            l=n;
        }
        for(int j=1;j<=21;j++)
        {
            if(j>=12-k && j<=10+k)
            {
                if(l==10)
                {
                    l=0;
                }
                else if(l==-1)
                {
                    l=9;
                }
                cout<<l;
                j<11?l++:l--;
            }
            else
            {
                cout<<" ";
            }
        }
        cout<<endl;
        i<11?k++:k--;
        i<=10?n++:n--;
    }
    return 0;
}
