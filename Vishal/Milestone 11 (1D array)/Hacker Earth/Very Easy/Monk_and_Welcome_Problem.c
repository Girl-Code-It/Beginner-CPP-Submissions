#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    scanf("%d",&n);

    int *a = (int*)malloc(n*sizeof(int));
    int *b = (int*)malloc(n*sizeof(int));
    
    for(int i=0;i<n;i++)
      scanf("%d",&a[i]);
    
    for(int i=0;i<n;i++)
      scanf("%d",&b[i]);
    
    for(int i=0;i<n;i++)
     printf("%d ",a[i]+b[i]);
    
    free(a);
    free(b);

}