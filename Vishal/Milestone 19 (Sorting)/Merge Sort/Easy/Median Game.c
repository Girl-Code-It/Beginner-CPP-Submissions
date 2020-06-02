#include<stdio.h>

int main()
{
    int n,t;
    scanf("%d",&t);

    while(t--)
    {
        scanf("%d",&n);
        int a,min = 10e9,max = -10e9;
        
        for(int i=0; i<n; i++)
         {
              scanf("%d",&a);
             if(a > max)
               max = a;
             else if(a < min)
               min = a;
         }   
        printf("%d\n",max+min);
    }
    return 0;
}