#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main()
{                      // in this we have to convert each uppercase and lowercase letter into their position in alphabets.
    int n;             // and to convert space into $ .
    scanf("%d",&n);
    while(n>=0)
  {
    char a[200];
    gets(a);
    for(int i=0;i<strlen(a); i++)  // traversing string.
    {
      if(islower(a[i]))            // getting lowercase letter.
          printf("%d",(a[i] - 96));  // diff of lowercase letters witth their position in alphabets is 96. so subtracting 96 from char ascii value of char.
      else if(isupper(a[i]))         //getting uppercase letter.
          printf("%d",(a[i] - 64)); // diff of uppercase letters with their position in alphabets is 64.
      else
          printf("$");              // getting space . printing $.
     }
    printf("\n");
    n--;                           // decreasing the string we have checked already.
   }
    return 0;
}
