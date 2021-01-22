/*
Write a C program to find diameter, circumference and area of circle using functions.

*/
#include <stdio.h>

void getInfo(int r)
{
    printf("\nDiameter: %d",2*r);
    printf("\nCircumference: %f",2.0*3.14*(double)r);
    printf("\nArea: %f",3.14*(double)r*(double)r);
}
int main()
{
    int r;
    printf("Enter the radius: "); scanf("%d",&r);
    getInfo(r);
    return 0;
}