using namespace std;
#include<iostream>
int main()
{
    for(int i=1;i<=5;i++)
    {
        for(int j=i;j>=1;j--)
            cout<<j;
        cout<<endl;
    }
    return 0;
}
