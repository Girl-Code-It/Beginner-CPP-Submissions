#include<stdio.h>

int binSrch(int *a,int n,int t,int i)
{
    if(i == n)
    return -1;
    
    if(a[i] != t)
    binSrch(a,n,t,i+1);
    else
    return i;
}

int main ()
{
    int n,t,res;
    printf("Enter the size of array : ");
    scanf("%d",&n);
    int a[n];
    printf("Enter the element\n");
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    
    printf("Enter the no to search : ");
    scanf("%d",&t);
    
    res = binSrch(a,n,t,0);
    
    if(res == -1)
    printf("%d is not found.\n",t);
    else
    printf("%d is found at the index %d.\n",t,res);
}