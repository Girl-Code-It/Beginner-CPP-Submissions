using namespace std;
#include<iostream>
int main()
{
    char k;
    for(int i=1;i<=4;i++)
    {
        k=char(64+i);
        for(int j=1;j<=i;j++)
        {
            cout<<k;
            k--;
        }
        cout<<endl;
    }
    return 0;
}
