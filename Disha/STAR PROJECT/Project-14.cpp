using namespace std;
#include<iostream>
int main()
{
    int k;
    for(int i=6;i>=0;i--)
    {
        k=i;
        for(int j=0;j<=i;j++)
        {
            cout<<k;
            k--;

        }
        cout<<endl;
    }
    return 0;
}
