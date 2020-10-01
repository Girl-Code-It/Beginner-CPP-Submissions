using namespace std;
#include<iostream>
int main()
{
    for(int i=1;i<=7;i++)
    {
        for(int j=1;j<=7;j++)
        {
            if(j==i)
            {
                cout<<"\\" ;
            }
            else if(j==8-i)
            {
                cout<<"/";
            }
            else
            {
                cout<<"*";
            }
        }
        cout<<endl;
    }
    return 0;
}
