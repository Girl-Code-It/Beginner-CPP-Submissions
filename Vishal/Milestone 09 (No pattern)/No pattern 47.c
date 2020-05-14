#include<stdio.h>
#include<math.h>
int main()
{
    int n,k=1;
    printf("Enter thr no. of rows : ");
    scanf("%d",&n);
    
    for(int i=0;i<n;i++)
    {
        for(int j=1;j<=pow(2,i);j++)
        {
           if(k<10)
            {
              printf("%d ",k);
              k++;
            }     
            else
            {
               k=1;
              printf("%d ",k);
              k++;
            }   
        }
        printf("\n");
    }
    return 0;
}