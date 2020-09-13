using namespace std;
#include<iostream>
int main()
{
    int k;
    for(int i=0;i<=4;i++)
    {
        k=0;
        for(int j=0;j<=i;j++)
        {
            cout<<k;
            k+=i;
        }
        cout<<endl;
    }
    return 0;
}
