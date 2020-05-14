#include<stdio.h>
/*You are given a list of n-1 integers
and these integers are in the range of 1 to n.
There are no duplicates in the list. One of the
integers is missing in the list.*/

int missingNum(int *a,int n)
{
    int x1 = a[0],x2 = 1;

   //for XOR of all element of the array
    for(int i=1; i<n; i++)
        x1 ^= a[i];

   //for XOR of all no from 1 to n+1
    for(int i=2; i <= n+1; i++)
        x2 ^= i;


    return (x1^x2);
}
int main()
{
    int n;
    printf("Enter the Number : ");
    scanf("%d",&n);

    int a[n];
    for(int i=0; i<n; i++)
        scanf("%d",&a[i]);
    printf("Missing Number is : %d\n",missingNum(a,n));
}