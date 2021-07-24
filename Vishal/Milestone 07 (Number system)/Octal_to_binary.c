#include <stdio.h>

void main()
{
    int OctConstant[] = {0, 1, 10, 11, 100, 101, 110, 111};
    long octal, binary = 0, tempOctal;
    int index = 1, digit, reverse = 0;

    printf("Enter octal number: ");
    scanf("%d", &octal);
    tempOctal = octal;

    while (tempOctal != 0)
    {
        digit = tempOctal % 10;
        binary += OctConstant[digit] * index;
        tempOctal /= 10;
        index *= 1000;
    }
    printf("Octal number = %d\n", octal);
    printf("Binary number = %d", binary);
}