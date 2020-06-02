#include<stdio.h>
/*
Given an unsorted array that contains even number
of occurrences for all numbers except two numbers.
Find those Two Number.
*/

void printTwoOdd(int *a,int n,int *x,int *y)
{
    int XOR = a[0];//XOR of all element of the array
    int setBitXOR;//Set bit of XOR

    *x = 0,*y = 0;

    for(int i = 1; i< n; i++)
        XOR ^= a[i];
        
   //Get the Rightmost set bit in setBitXOR
   setBitXOR = XOR & ~(XOR - 1);

    //Now divide the array acc to setBitXOR
    
    for(int i=0;i<n;i++)
     {
        if(a[i] & setBitXOR)
         *x ^= a[i]; //XOR of first set
        else
         *y ^= a[i];
     }
}
int main()
{
    int n,x,y;
    printf("Enter the size of array : ");
    scanf("%d",&n);

    int a[n];
    printf("\nEnter the element\n");
    for(int i=0; i<n; i++)
        scanf("%d",&a[i]);

    printTwoOdd(a,n,&x,&y);
    printf("\nTwo ODD are %d & %d.\n",x,y);
}