using namespace std;
#include<iostream>
int main()
{
    int t,n,m,j,k,l,r,flag;
    char s[1000][1000];
    cin>>t;
    cin.ignore(256,'\n');
    for(int i=0;i<t;i++)
    {
        flag=0;
        cin>>n>>m;
        //to input the string
        for(j=0;j<n;j++)
        {
            for(k=0;k<m;k++)
                cin>>s[j][k];
        }
        //to check for unique rows
        for(j=0;j<n-1;j++)
        {
            for(k=j+1;k<n;k++)
            {
                for(l=0;l<m;l++)
                {
                    if(j==l)
                    {
                        continue;
                    }
                    else if(s[j][l]!=s[k][l])
                    {
                        break;
                    }
                }
                if(l==m)
                    flag=1;
                else
                    flag=0;
            }
        }

    }
    return 0;
}
