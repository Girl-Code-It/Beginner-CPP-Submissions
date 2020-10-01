using namespace std;
#include<iostream>
int main()
{
    int i,j;
    char k;
    for(i=1;i<=5;i++)
    {
        k='A';
        for(j=1;j<=7;j++)
        {
            if(j>=6-i&&j<=2+i)
            {
                cout<<" ";
                if(j==4)
                {
                    k--;
                }
            }
            else
            {
                cout<<k;
                j<4?k++:k--;

            }
        }
        cout<<endl;
    }
    return 0;
}
