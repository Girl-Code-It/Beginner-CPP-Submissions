#include<stdio.h>
#include<math.h>
int i;

int isPrime(int n)
{
  
   if(i == 1)
   return 1;
  
   else if(n%i == 0)
   return 0;

   else
    {
       i -= 1;
       isPrime(n);
    }
    
   return 1;
}

int main()
{
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    i = sqrt(n);
    if(isPrime(n))
    printf("%d is a prime no.\n",n);
    else
    printf("%d is a coprime no.\n",n);
    
    return 0;
}