
#include <stdio.h>

int check_prime();

main()
{
int i, n, result;

printf("Enter the number\n");
scanf("%d",&n);
printf("all prime factors of %d are :\n",n);

for(i=0; i < n; i++)
{
result = check_prime(i);

if ( result == 1 &&(n%i)==0)
printf("%d\n",i);
}
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



