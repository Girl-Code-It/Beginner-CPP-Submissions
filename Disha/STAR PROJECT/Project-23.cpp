using namespace std;
#include<iostream>
int main()
{
    int k=1;
    for(int i=1;i<=6;i++)
    {
        k=1;
        for(int j=1;j<=i;j++)
        {
            cout<<k;
            j%2==0?k++:k--;
        }
        cout<<endl;
    }
    return 0;
}

