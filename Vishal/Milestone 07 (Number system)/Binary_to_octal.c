#include<stdio.h>

int bin_to_oct(int n){
    int binary_octal[8] = {0, 1, 10, 11, 100, 101, 110, 111};
    int i = 0;

    while(binary_octal[i] != n)
        i++;
    
    return i;
}

int main(){

    long binary;

    printf("Enter a Binary number : ");
    scanf("%d",&binary);

    int reverse_octal = 0, digit, octal = 0;
    while (binary)
    {
        digit = bin_to_oct(binary%1000);
        reverse_octal = reverse_octal*10 + digit;
        binary /= 1000;
    }
    
    while(reverse_octal){
        octal = octal*10 + reverse_octal%10;
        reverse_octal /= 10;
    }
    printf("%d", octal);
    return 0;
}