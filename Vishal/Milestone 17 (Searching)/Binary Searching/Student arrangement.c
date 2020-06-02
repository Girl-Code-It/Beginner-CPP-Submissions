#include <stdio.h>
 
int main()
{
    int n,m,k,x,y,i,j,ans,flag=1;
    scanf("%d %d %d",&n,&m,&k);
    int a[100001]={0},b[100001]={0};
    ans=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&x);
        if(a[x]<k)
        {
            ans++;
            a[x]++;
        }
        else if(flag!=0)
        {
            y=x;
            x++;
            if(b[y]!=0)
            x=b[y];
            flag=0;
            while(x!=y)
            {
                if(x == m+1)
                x=1;
                if(x == y)
                break;
                if(a[x] < k)
                {
                    a[x]++;
                    flag=1;
                    b[y]=x;
                    break;
                }
                x++;
            }
        }
    }
    printf("%d",n-ans);
    return 0;
}