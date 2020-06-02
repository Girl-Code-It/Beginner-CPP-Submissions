#include<stdio.h>
#include<string.h>
int main()
{
    char a[1000],b[1000];
    int count[128],count1[128];
    printf("Enter the first string : ");
    gets(a);
    printf("Enter the second string : ");
    gets(b);
    int cnt = 0;
    
    if(strlen(a) != strlen(b))
    printf("String are not anagram of each other\n");
    else
    {
    for(int i=0; i<strlen(a); i++)
       count[a[i]]++;
    
    for(int i=0; i<strlen(a); i++)
       count1[b[i]]++;
    
    for(int i=0; i<128 ; i++)
    {       
      if(count[i] != count1[i])
      cnt = 1;  
    }
    if(cnt == 0)
    printf("String are anagram of each other\n");
    else
    printf("String are not anagram of each other\n");
    }
    return 0;
    
}
