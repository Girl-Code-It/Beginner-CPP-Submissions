#include<stdio.h>

void reverse(char *a,int i,int j)
{
    if(i < j)
    {
        char temp = a[i];
        a[i] = a[j];
        a[j] = temp;

        reverse(a,i+1,j-1);
    }

}
int main()
{
    int n;
    printf("Enter the length of the string : ");
    scanf(" %d",&n);
    getchar();
    char a[n];
    printf("Enter the element\n");
    gets(a);
    reverse(a,0,n-1);
    printf("Reverse string : %s\n",a);

    return 0;

}