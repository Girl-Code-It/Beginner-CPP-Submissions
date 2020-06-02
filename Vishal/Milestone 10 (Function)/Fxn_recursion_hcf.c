#include<stdio.h>
int hcf(int n1, int n2) 
{
 if (n2 != 0) 
 return hcf(n2, n1 % n2);
 else return n1; 
  
}


void main()
{
    int a,b;
    printf("Enter any two no : ");
    scanf("%d%d",&a,&b);
    printf("HCF of %d & %d is %d",a,b,hcf(a,b));
}