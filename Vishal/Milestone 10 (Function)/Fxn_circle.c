#include<stdio.h>

float circumference(int x)
{
    return 2*(3.14)*x;
}

int Diameter(x)
{
    return 2*x;
}

float Area(int x)
{
    return 3.14*3.14*x;
}

int main()
{
    int r;
    printf("Enter the radius of the circle : ");
    scanf("%d",&r);
    printf("Area of the circle is %.3f\n",Area(r));
    printf("circumference of the circle is %.3f\n",circumference(r));
    printf("Diameter of the circle is %d\n",Diameter(r));
}