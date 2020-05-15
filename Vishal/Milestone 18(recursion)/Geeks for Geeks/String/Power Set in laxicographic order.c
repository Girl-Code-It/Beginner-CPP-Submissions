#include<stdio.h>

int Sort(const void *a,const void *b)
{
  return (*(char*)a - *(char*)b);
}
//It gives all substring
void AllSubstring(char *str,int n,int len)
{
    char Substr[50];

    // (n-len) give the no of string possible of length len
    // for ex :  abcd n = 4 ,len = 1 then n-len = 3 then from i=0 to 3
    // there will be 4 substring of len 1 i.e. a,b,c,d.
    for(int i=0; i <= n-len; i++)
    {

        //store the substring of length len
        int k = 0;
        for(int j=i; j <= i+len-1; j++)
        {   Substr[k] = str[j];
            k++;
        }

        Substr[len] = '\0';
        printf("%s\n",Substr);
    }
    
    //check for string of higher lengrh
    AllSubstring(str,n,len+1);
}
int main()
{
    char str[50];
    printf("Enter the string : ");
    scanf("%s",str);

    qsort(str,strlen(str),sizeof(char),Sort);
    AllSubstring(str,strlen(str),1);
    return 0;
}