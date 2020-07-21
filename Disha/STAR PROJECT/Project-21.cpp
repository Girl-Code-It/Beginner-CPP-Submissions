using namespace std;
#include<iostream>
int main()
{
    int j;
    for(int i=1;i<5;i++)
    {
        for(j=4;j>i;j--)
        {
            cout<<" ";
        }
        for(j=1;j<=5;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}

