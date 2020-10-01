
#include <stdio.h>

int check_prime();

main()
{
int i, n, result,sum=0;

printf("Enter the number\n");
scanf("%d",&n);
printf("prime numbers between 1 and %d are :\n",n);

for(i=0; i < n; i++)
{
result = check_prime(i);

if ( result == 1 )
{ sum+=i;
printf("%d\n",i);
}
}
printf("sum of all prime no. Between 1 and %d = %d",n,sum);
return 0;
}

int check_prime(int a)
{
int j;

for ( j= 2 ; j<= a - 1 ; j++ )
{
if ( a%j == 0 )
return 0;
}
if ( j == a )
return 1;
}



