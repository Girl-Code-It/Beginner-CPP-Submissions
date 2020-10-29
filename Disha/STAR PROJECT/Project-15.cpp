using namespace std;
#include<iostream>
int main()
{
    int k;
    for(int i=1;i<=9;i++)
    {
        k=1;
        for(int j=1;j<=5;j++)
        {
            if(j>=6-i && i<=5)
            {
                cout<<k;
                k++;
            }
            else if(i>5 && j>=i-4)
            {
                cout<<k;
                k++;
            }
            else
            {
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}
