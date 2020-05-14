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


    for(int i=str; i<n && n-i >= r-j ; i++)
    {
        b[j] = a[i];
        Combination(a,b,i+1,n,j+1,r);
    }
}
int main()
{
    int n,r;
    printf("Enter the natural no : ");
    scanf("%d",&n);
    printf("Enter the order : ");
    scanf("%d",&r);
    int a[n];

    for(int i=0; i<n; i++)
        a[i] = i+1;

    int b[r];
    Combination(a,b,0,n,0,r);

}