#include<stdio.h>
#include<math.h>

int powerSum(int x,int n,int num)
{
    if(pow(num,n) < x)
        return powerSum(x-pow(num,n),n,num+1) + powerSum(x,n,num+1);
    else if(pow(num,n) == x)
        return 1;
    else
        return 0;

}

int main ()
{
    int x,n;
    scanf("%d %d",&x,&n);

    printf("%d\n",powerSum(x,n,1));
}