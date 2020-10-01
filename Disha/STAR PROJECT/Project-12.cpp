using namespace std;
#include<iostream>
int main()
{
    int len=7;
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<i;j++)
        {
            cout<<" ";
        }
        for(int k=1;k<=len;k++)
        {
            cout<<"*";
        }
        cout<<endl;
        len-=2;
    }
    return 0;
}
