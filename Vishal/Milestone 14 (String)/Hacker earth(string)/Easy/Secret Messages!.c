#include <stdio.h>
#include<string.h>
#define ll long long
int main()
{
 int t,rem,temp;
 ll n,k;
 scanf("%d",&t);
 while(t--)
  {   
    scanf("%d %d",&n,&k);
    char a[1000000];
    scanf("%s",&a);
    for(ll i=0;i<n;i++)
    {
       if((a[i] >= 'a' && a[i] <='z'))
        {   
          rem = k%26;  
          temp = (int)a[i] + rem;
          if(temp<=122)
             printf("%c",(char)temp);
          else
          printf("%c",(char)(temp - 26));
        }
       else if((a[i] >= 'A' && a[i] <='Z'))
         {   
          rem = k%26;  
          temp = (int)a[i] + rem;
          if(temp<=90)
             printf("%c",(char)temp);
          else
          printf("%c",(char)(temp - 26));
        }
        else if((a[i] >= '0' && a[i] <='9'))
        {   
          rem = k%10;  
          temp = (int)a[i] + rem;
          if(temp<=57)
             printf("%c",(char)temp);
          else
          printf("%c",(char)(temp - 10));
        }
        else
          printf("%c",a[i]);
    }
    printf("\n");
  }
    return 0;
}