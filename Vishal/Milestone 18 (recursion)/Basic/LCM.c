#include <stdio.h>

int lcmCalculate(int a, int b)
{
    static int m = 0;
    m += b;
    
    if((m % a == 0) && (m % b == 0))
        return m;
    else
        lcmCalculate(a, b);
}
int main()
{ 
    int n1,n2,lcmOf;
    printf("Input 1st number for LCM : ");
    scanf("%d", &n1);
    printf("Input 2nd number for LCM : ");
    scanf("%d", &n2);

    if(n1 >  n2)
        lcmOf = lcmCalculate(n2, n1);//call the function lcmCalculate for lcm calculation
    else
        lcmOf = lcmCalculate(n1, n2);//call the function lcmCalculate for lcm calculation
    printf("The LCM of %d and %d :  %d\n\n", n1, n2, lcmOf);
    return 0;
}