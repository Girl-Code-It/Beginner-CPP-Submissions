using namespace std;
#include<iostream>
int main()
{   int len=1;
    for(int i=0;i<5;i++)
    {
        for(int j=4;j>i;j--)
        {
            cout<<" ";
        }
        for(int k=1;k<=len;k++)
        {
                cout<<"*";

        }
        cout<<"\n";

        len+=2;
    }

    return 0;
}
