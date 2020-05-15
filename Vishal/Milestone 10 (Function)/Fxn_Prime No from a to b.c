
#include <stdio.h>
#include<math.h>
int check_prime(int a)
{
    int j,flag = 1;
    for (j= 2 ; j <= sqrt(a) ; j++ )
    {
        if ( a%j == 0 )
          flag = 0;
    }
    if (flag)
    return 1;
    else
    return 0;
}


main()
{
    int a,b,result;

    printf("Enter the upper limit : ");
    scanf("%d",&b);
    printf("Enter the lower limit : ");
    scanf("%d",&a);
    printf("prime numbers between %d and %d are :\n",a,b);

    for(int i=a; i <=b; i++)
    {
        result = check_prime(i);

        if ( result == 1 )
            printf("%d\n",i);
    }
    return 0;
}




