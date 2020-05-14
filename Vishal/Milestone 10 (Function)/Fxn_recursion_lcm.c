#include<stdio.h>

int hcf(n1,n2) 
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
    printf("LCM of %d & %d is %d",a,b,(a*b)/hcf(a,b));
}