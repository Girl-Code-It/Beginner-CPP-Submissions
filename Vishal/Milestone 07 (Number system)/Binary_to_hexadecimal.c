#include<stdio.h>

char bin_to_hex(int n){
    int binary_hexa[16] = {0, 1, 10, 11, 100, 101, 110, 111,1000,1001,1010,1011,1100,1101,1111};
    char hexa[16] = {'0', '1', '2', '3', '4', '5','6', '7','8','A','B','C','D','E','F'};
    int i = 0;

    while(binary_hexa[i] != n)
        i++;
    
    return hexa[i];
}

int main(){

    long binary;

    printf("Enter a Binary number : ");
    scanf("%d",&binary);

    char hexa[32], temp;
    int len = 0;
    while (binary)
    {
        hexa[len++] = bin_to_hex(binary%10000);
        binary /= 10000;
    }
    hexa[len] = '\0';

    //Reverse string
    for (int i = 0; i < len/2; i++)
    {
        temp = hexa[i];
        hexa[i] = hexa[len-1-i];
        hexa[len-1-i] = temp; 
    }
    

    printf("%s", hexa);
    return 0;
}