using namespace std;
#include<iostream>
int main()
{
    int k;
    for(int i=5;i>=1;i--)
    {
        k=i;
        for(int j=1;j<=5;j++)
        {
            cout<<k;
            k<5?k++:k=5;
        }

        cout<<endl;
    }
    return 0;
}

