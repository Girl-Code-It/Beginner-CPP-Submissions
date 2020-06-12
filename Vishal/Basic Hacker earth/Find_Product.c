#include<stdio.h>
#define R 1000000007

int main()
{
    int n,a;
    long long product = 1;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
       { 
          scanf("%d",&a);
           product *= a;
           product = product%R;
       }
    printf("%lld\n",product);
    return 0;
}