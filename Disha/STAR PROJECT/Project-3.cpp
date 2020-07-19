using namespace std;
#include<iostream>
int main()
{
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<i;j++)
        {
            cout<<" ";
        }
        for(int k=5;k>i;k--)
        {
            cout<<"*";
        }
        cout<<endl;

    }
}
