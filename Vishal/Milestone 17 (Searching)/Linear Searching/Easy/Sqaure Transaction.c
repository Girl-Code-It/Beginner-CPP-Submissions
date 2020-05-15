#include<stdio.h>

int main()
{
    int T,Q,Target;
    scanf("%d",&T);
    int trans[T+1];
    for(int i=0;i<T;i++)
       scanf("%d",&trans[i]);
    scanf("%d",&Q);
    while(Q--)
    {
        scanf("%d",&Target);
        long int sum = 0,i;
        for(i=0;i<T;i++)
        {
             sum += trans[i];
            if(sum >= Target)
            {
              printf("%d\n",i+1);
              break;
            }  
            if(i == T-1)
            printf("-1\n");
        }
             
    }
    
    return 0;
}