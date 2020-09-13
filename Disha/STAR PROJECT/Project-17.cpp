using namespace std;
#include<iostream>
int main()
{
    int k=1;
    for(int i=1;i<=9;i++)
    {
        for(int j=1;j<=9;j++)
        {
            if(j>=7-k && j<4+k)
            {
                cout<<" ";
            }
            else
            {
                cout<<"*";
            }
        }
        i<5?k++:k--;
        cout<<endl;
    }
    return 0;
}
