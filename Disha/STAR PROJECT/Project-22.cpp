using namespace std;
#include<iostream>
int main()
{
    int l;
    char k;
    for(int i=1;i<=4;i++)
    {
        l=1;
        k='A';
        for(int j=1;j<=7;j++)
        {
            if(j>=5-i&&j<=3+i)
            {
                if(j<=4)
                {
                    cout<<l;
                    l++;
                }
                else
                {
                    cout<<k;
                    k++;
                }
            }
            else
            {
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}

