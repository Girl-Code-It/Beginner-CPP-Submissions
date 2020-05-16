#include <stdio.h>
#include <string.h>
int main()
{
    int t;
    char c[100002];
    scanf("%d",&t);
    while(t--)
    {
        int a[26]= {0},sum = 1;
        scanf("%s",&c);
        int l=strlen(c);
        
        for(int i=0; i<l; i++)
            a[c[i]-97]++;//Count the no of occurance of alphabet
        
        long long x=1000000007;
        for(int i=0; i<26; i++) 
        {
          if(a[i]>0)
             sum=((sum%x)*(a[i]%x))%x;
        }
        printf("%d\n",sum);
    }
        return 0;
}
