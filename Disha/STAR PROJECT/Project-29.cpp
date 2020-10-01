using namespace std;
#include<iostream>
int main()
{
    char k='A',m;
    for(int i =1;i<=5;i++)
    {
        m=k+(i-1);
        for(int j=1;j<=5;j++)
        {
            if(j>=6-i)
            {
                cout<<m;
                m--;
                k++;
            }

            else
                cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}
