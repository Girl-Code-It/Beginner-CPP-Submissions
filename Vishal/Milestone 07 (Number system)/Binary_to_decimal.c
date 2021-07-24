#include<stdio.h>

int main(){
    long n;
    printf("Enter a number : ");
    scanf("%d", &n);
    
    int decimal = 0, power = 1;
    while(n){
        decimal = decimal + (n%10)*power; 
        power *= 2;
        n /= 10;
    }

    printf("%d", decimal);
    return 0;
}