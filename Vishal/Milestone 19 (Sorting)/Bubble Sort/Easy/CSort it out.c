#include<stdio.h>
 
void swap(int *x,int *y)
{ 
   int z = *x;
      *x = *y;
      *y = z;
}
 
int main()
{
    int n,flag;
    scanf("%d",&n);
    int a[n],index[n];
    
    for(int i=0;i<n;i++)
     {
     scanf("%d",&a[i]);
     index[i] = i;
     }
    
    for(int i=1;i<n-1;i++)
     {
        flag = 0;
       for(int j=0;j<n-i;j++)
        {
           if(a[j] > a[j+1])
           {
        
             swap(&a[j],&a[j+1]);
             swap(&index[j],&index[j+1]);
             flag = 1;
            
           }
        }
        if(flag == 0)
        break;
     }
    for(int i=0;i<n;i++)
     printf("%d ",index[i]);
    
}