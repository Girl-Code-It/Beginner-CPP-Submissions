#include<stdio.h>

int main(){
    int n;
    printf("Enter value of n : ");
    scanf("%d", &n);

    int first, last, count = 1;
    last = n%10;
    first = n;

    while(first > 9)
        first /= 10, count *= 10;

    // printf("First and last digit of %d is %d and %d respectively.\n", n, first, last, count);
    printf("New Number after swapping first and last digit is %d", n-(first-last)*count - (last-first));
    return 0;
}