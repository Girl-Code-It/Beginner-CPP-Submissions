/*
Write a C program to check whether a number is prime, Armstrong or perfect number using 
functions.

*/
#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool isPrime(int a)
{
    if(a == 1) return false;
    if(a == 2) return true;

    for(int i = 2; i*i <= a; i++)
    if(a%i == 0)
    return false;
    return true;
}
bool isArmstrong(int a)
{
    int sum = 0, copy = a;
    while(a != 0)
    {
        sum += pow(a%10,3);
        a /= 10;
    }
    if(copy == sum) return true;
    return false;

}
bool perfect(int a)
{
    int sum = 0;

    for(int i = 1; i < a; i++)
    if(a%i == 0)
    sum += i;

    if(sum == a) return true;
    return false;
}
int main()
{
    int a;
    printf("Enter a number: "); scanf("%d",&a);

    if(isPrime(a)) printf("\n%d is prime",a);
    else printf("\n%d is not prime",a);
    if(isArmstrong(a)) printf("\n%d is Armstrong",a);
    else printf("\n%d is not Armstrong",a);
    if(perfect(a)) printf("\n%d is perfect",a);
    else printf("\n%d is not perfect",a);

    return 0;
}