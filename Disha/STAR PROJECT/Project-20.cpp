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
        for(int j=1;j<=8;j++)
        {
            if(j>=5-i && j<=4+i)
            {
                if(j<=4)
                {
                    cout<<k;
                    k++;
                }
                else
                {
                    cout<<l;
                    l++;
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
