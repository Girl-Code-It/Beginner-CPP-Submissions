using namespace std;
#include<iostream>
int main()
{   int len=1;
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<i;j++)
        {
            cout<<" ";
        }
        for(int k=9;k>=len;k--)
        {
            cout<<"*";
        }
        cout<<endl;
        len+=2;
    }
    return 0;
}
