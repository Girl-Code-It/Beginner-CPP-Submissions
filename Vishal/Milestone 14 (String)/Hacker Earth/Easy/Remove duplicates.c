#include<stdio.h>

void first_occur(char *a)
{
    for(long long i=0; a[i] != '\0'; i++)
    {

        long long k = 0;
        while(a[k] != a[i])
        {
            k++;
        }
        if(k == i)
            printf("%c",a[i]);
  
    }
    a == NULL;
    
}
int main()
{    
    char str[100000];
    scanf("%s",&str);
    first_occur(str);
    printf("\n");
    return 0;

}