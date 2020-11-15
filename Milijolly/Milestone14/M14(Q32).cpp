//Palindrome
#include <stdio.h>

int main()
{
    int t;
    scanf("%i",&t);
    while(t--){
        char str[12345];
        int len,i;
        scanf("%s%n",str,&len);
        len--;
      
        for(i=0;i<len>>1;i++)
            if(str[i]!=str[len-i-1])
                break;
   
        puts(i==(len>>1) ?"YES":"NO");
    }
    return 0;
}
