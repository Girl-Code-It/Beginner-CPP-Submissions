#include<iostream>
using namespace std;

//Check substring is palindrome or not
int isPalindrome(char *Substr,int n)
{
    for(int i=0; i <= n/2; i++)
    {
        if(Substr[i] != Substr[n-1-i])
            return 0;
    }
    return 1;
}
//It gives all substring
void AllSubstring(char *str,int n)
{

    for (int len = 1; len < n; len++)
    {
        char Substr[50];
        /* code */
        for(int i=0; i <= n-len; i++)
        {

            //store the substring of length len
            int k = 0;
            for(int j=i; j <= i+len-1; j++)
            {   Substr[k] = str[j];
                k++;
            }

            Substr[len] = '\0';
            if(isPalindrome(Substr,len))
                return 0;
        }
    }
    return 1;
}

int main()
{
    char str[50];
    printf("Enter the string : ");
    scanf("%s",str);


    AllSubstring(str,strlen(str));
    return 0;
}