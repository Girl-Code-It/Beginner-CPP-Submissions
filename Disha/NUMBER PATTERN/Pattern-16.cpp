using namespace std;
#include<iostream>
int main()
{
    int k=1;
    for(int i=1;i<=4;i++)
    {
        i%2!=0?k=1:k=0;
        for(int j=1;j<=i;j++)
        {
            cout<<k;
            k=1-k;
        }
        cout<<endl;
    }
    return 0;
}

