#include<stdio.h>

void first_occur(char *a)
{
    for(int i=0; a[i] != '\0'; i++)
    {
        if(a[i] < 'a' || a[i] > 'z')
        {
            printf("Error!!\nUpper case is not allowed\n");
            return 0;
        }
    }
    for(int i=0; a[i] != '\0'; i++)
    {

        int k = 0;
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
    long n ;
    scanf("%d",&n);
  while(n--)
  {
    char str[200];
    scanf("%s",&str);
    first_occur(str);
    printf("\n");
  }
    return 0;

}