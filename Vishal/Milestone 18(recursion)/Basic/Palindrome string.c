#include <stdio.h>

void isPalindrome(char *s,int left)
{
    int right = strlen(s)-1-left;
    if(s[left] == s[right])
    {
        if(left+1 == right || left == right)
        {
            printf("Given string is a Palindrome\n");
            return;
        }
        isPalindrome(s,left+1);
    }
    else
    {
        printf("Given string is not a Palindrome\n");
        return;
    }

}
int main()
{
    char s[50];
    printf("Input the string to check palindrome : ");
    scanf(" %s", &s);
 
    isPalindrome(s,0);
    return 0;
}


