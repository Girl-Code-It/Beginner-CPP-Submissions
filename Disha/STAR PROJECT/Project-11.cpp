using namespace std;
#include<iostream>
int main()
{
    int k=1;
    for(int i=1;i<=7;i++)
    {
        for(int j=1;j<=4;j++)
        {
            if(j<=k)
            {
                cout<<"*";
            }
            else
            {
                cout<<" ";
            }
        }
        i<4?k++:k--;
        cout<<endl;
    }
    return 0;
}
