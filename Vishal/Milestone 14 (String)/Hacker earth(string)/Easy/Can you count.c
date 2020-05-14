/*replace all underscores
(if any) with vowels present
 in the string.*/

//Count total no of possible string
#include<stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        char a[100000];
        scanf("%s",&a);
        long c=0,cA=0,cE=0,cI=0,cO=0,cU=0;
        long long ans=1;
        for(long i=0; i<strlen(a); i++)
        {
            if(a[i]=='a' && cA==0)
            {
                c++;
                cA++;
            }
            else if(a[i]=='e' && cE==0) {
                c++;
                cE++;
            }
            else if(a[i]=='i' && cI==0) {
                c++;
                cI++;
            }
            else if(a[i]=='o' && cO==0) {
                c++;
                cO++;
            }
            else if(a[i]=='u' && cU==0) {
                c++;
                cU++;
            }
            else if(a[i]=='_') {
                ans*=c;
            }
        }
        printf("%lld\n",ans);
    }
    return 0;
}

