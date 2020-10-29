#include<stdio.h>

int main()
{
    char s[200];
    scanf("%s",s);
    int left = 0,right = 0,up = 0,down = 0;
    
    for(int i=0;s[i] != '\0';i++)
     {
         if(s[i] == 'L')
         left++;
         else if(s[i] == 'R')
         right++;
        else if(s[i] == 'U')
        up++;
        else
        down++;
     }
    printf("%d %d\n",right-left,up-down);

}