#include<stdio.h>
#include<string.h>
int strToInt(char *s,int len)
{
    //Base case (only one digit)
    if(len == 1)
    return *s - '0';
    //recur for n-1 and multiply with 10 and add last digit
    return (10*strToInt(s,len-1) + s[len-1] - '0');
}

int main()
{
    char s[100];
    printf("Enter the string : ");
    scanf("%s",s);
   
    printf("Integral Value : %d.\n",strToInt(s,strlen(s)));
}