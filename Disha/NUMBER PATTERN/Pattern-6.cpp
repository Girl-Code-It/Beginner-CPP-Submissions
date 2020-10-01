using namespace std;
#include<iostream>
int main()
{
    for(int i=1;i<=5;i++)
    {
        for(int j=5;j>=i;j--)
            cout<<j;
        cout<<endl;
    }
    return 0;
}
