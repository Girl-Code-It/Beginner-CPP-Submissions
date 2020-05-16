#include<stdio.h>
#include<math.h>
int main ()
{
    int t,n;
    int arr[]={67,71,73,79,83,89,97,101,103,107,109,113};
    scanf("%d",&t);
    while(t--)
    {
        char s[500];
        scanf("%d %s",&n,s);
        int diff,diff1,pos;
        for(int i=0; i<n; i++)
        {  
               diff=abs(s[i]-arr[0]);
                pos=0;
                for(int j=1; j<12; j++)
                {
                    diff1 = abs(arr[j]-s[i]);
                    if(diff1<diff)
                    {
                        diff = diff1;
                        pos = j;
                    }
                }
                printf("%c",arr[pos]);
        }
        printf("\n");
    }
    return 0;
}
