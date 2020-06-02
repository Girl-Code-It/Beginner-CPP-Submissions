#include<stdio.h>

void isPalindrome(char *num)
{
    static int flag = 1,i = 0;
    if(i == strlen(num))
    {
        printf("Palindrome.\n");
        return;
    }

    if(num[i] != num[strlen(num)-1-i])
    {
        printf("Not Palindrome.\n");
        return;
    }
    else
    {
        i++;
        isPalindrome(num);
    }
}

int main()
{
    char num[200];
    printf("Enter the No: ");
    scanf("%s",num);
    
    if(num[0] == '-')
    {
       int i;
       for(i=0;num[i+1] != '\0';i++)
         num[i] = num[i+1];
    
    num[i] = '\0';
    }
    isPalindrome(num);
    return 0;
}