#include <stdio.h>
#include <string.h>
int main()
{
    int t;
    char c[102];
    scanf("%d",&t);
    while(t--)
    {
        int a[26]= {0};
        scanf("%s",&c);
        int l=strlen(c);
        for(int i=0; i<l; i++) 
          a[c[i]-97]++;//Count the no of occurance of alphabet 
        
        for(int i=1; i<101; i++)
        {
            for(int j=0; j<26; j++)
            {
                if(a[j] == i)
                {
                    while(a[j]--)
                    {
                        printf("%c",97+j);
                    }
                }
            }
        }
        printf("\n");
    }
    return 0;
}