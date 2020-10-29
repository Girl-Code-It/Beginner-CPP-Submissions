#include<stdio.h>

int CntSubstr(char *str,int n,int i,int j)
{
   if(n == 1)
   return 1;

   if(n <= 0)
   return 0;

   int result = CntSubstr(str,n-1,i+1,j)
              + CntSubstr(str,n-1,i,j-1)
              - CntSubstr(str,n-2,i+1,j-1);
            
  if(str[i] == str[j])
  result++;

  return result;
}
int main()
{
    char str[50];
    printf("Enter the string : ");
    scanf("%s",str);
    int n = strlen(str);
    printf("Total Substring possible are : %d\n",CntSubstr(str,n,0,n-1));
    return 0;
}