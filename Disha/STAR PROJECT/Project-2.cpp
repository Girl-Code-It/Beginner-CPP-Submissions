using namespace std;
#include<iostream>
int main()
{
    int len=4;
    for(int i=1;i<=5;i++)
    {
        for(int j=len;j>0;j--)
        {
            cout<<" ";
        }
        for(int k=1;k<=i;k++)
        {
            cout<<"*";
        }
        cout<<endl;
        len--;
    }
    return 0;
}
