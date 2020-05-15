#include<stdio.h>

int main()
{
    int n,q,type,x,l,r;
    scanf("%d %d",&n,&q);
    int arr[n];
    for(int i=0; i<n; i++)
        scanf("%d",&arr[i]);

    while(q--)
    {
       
       scanf("%d",&type);
       if(type == 1)
       {
          scanf("%d",&x);
          arr[x-1] = (arr[x-1] == 0) ? 1 : 0;
       }
      else
       {
         scanf("%d %d",&l,&r);
         arr[r-1] == 0 ? printf("EVEN\n") : printf("ODD\n");
       }
    
    }
    return 0;
}