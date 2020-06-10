#include<stdio.h>

int main ()
{
    int n,a,sum,temp;
    printf("input a integer : ");
    scanf("%d",&n);
    printf("Before swapping : %d.\n",n);
    temp = n%10;
    int count = (int)log10(n);//No of digits
    
    //remove last digit & add first digit
    n = (n/10)*10 + n/pow(10,count);
    //remove first digit and swap with last digit
    n = n % (int)pow(10,count) + temp*pow(10,count);
    
    printf("After swapping : %d.\n",n);
    
    return 0;
}
    
    