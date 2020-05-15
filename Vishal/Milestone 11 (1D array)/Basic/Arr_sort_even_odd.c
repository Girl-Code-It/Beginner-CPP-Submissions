#include<stdio.h>

void sort_matrix(int a[],int str,int end)
{
    int b;
    for(int i=str; i<end; i++)
    {
        for(int j=i+1; j<end; j++)
        {
            if(a[i]>a[j])
            {
                b = a[i];
                a[i] = a[j];
                a[j] = b;
            }
        }
    }
}

void main()
{
    int a[50],n,oddcount=0,evencount=0;
    int even[25],odd[25];
    printf("Enter no of element : ");
    scanf("%d",&n);
    
    printf("Enter the element\n");
    for(int i=0; i<n; i++)
        scanf("%d",&a[i]);
    
    for(int i=0;i<n;i++)  
    { 
        if(a[i]%2 != 0)
        {
            odd[oddcount] = a[i];
            oddcount++;
        } 
        else
        {
        even[evencount] = a[i];
        evencount++;
        }
     }
        
     printf("Sorted matrix & separated even and odd element\n");
    //Sorts even matrix 
    sort_matrix(even,0,evencount);
    //print even matrix
    for(int i=0; i<evencount; i++)
        printf("%d ",even[i]);
        
    //Sorts odd matrix
    sort_matrix(odd,0,oddcount);
    //print odd matrix
    for(int i=0; i<oddcount; i++)
        printf("%d ",odd[i]);
    
}