#include<stdio.h>
#include<string.h>

int main(){
    char hexa[65];
    printf("Enter a hexadecimal Number : ");
    scanf("%s", hexa);

    int decimal = 0, len = strlen(hexa), i = 0, power = 1;
    while(len--){
        if(hexa[len] >= '0' && hexa[len] <= '9')
            decimal += (hexa[len] - '0')*power;
        else if(hexa[len] >= 'A' && hexa[len] <= 'F')
            decimal += (10 + hexa[len] - 'A')*power;
        else
            decimal += (10 + hexa[len] - 'a')*power;

        power *= 16;
    }

    printf("%d", decimal);

    return 0;
}