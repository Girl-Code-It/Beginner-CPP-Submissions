#include<stdio.h>

void Print(int *arr,int n)
{
    for(int i=0; i<n; i++)
        printf("%d ",arr[i]);

    printf("\n");
}

void Combination(int *a,int *b,int str,int n,int j,int r)
{
    
    if(j == r)
    {
       Print(b,r);
       return;
    }
   
   
   for(int i=str;i<n && n-i >= r-j ;i++)
   {
      b[j] = a[i];
      Combination(a,b,i+1,n,j+1,r);
   }    
}
int main()
{
    int n,r;
    printf("Enter the size of array : ");
    scanf("%d",&n);

    int a[n];
    printf("Enter the element\n");
    for(int i=0; i<n; i++)
        scanf("%d",&a[i]);

    printf("Enter the size of Subarray : ");
    scanf("%d",&r);

    int b[r];
    Combination(a,b,0,n,0,r);

}