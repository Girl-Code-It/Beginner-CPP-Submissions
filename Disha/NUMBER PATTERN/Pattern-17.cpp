using namespace std;
#include<iostream>
int main()
{
    int k;
    for(int i=1;i<=5;i++)
    {

        i%2!=0?k=1:k=2;
        for(int j=1;j<=i;j++)
        {
           cout<<k;
           k+=2;
        }
        cout<<endl;
    }
    return 0;
}

