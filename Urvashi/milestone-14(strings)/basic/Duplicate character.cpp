#include<stdio.h>
#include<string.h>
int main()
{
    char a[1000];
    int count[128];
    printf("Enter string : ");
    gets(a);
    int len = strlen(a);
    for(int i=0; i<len; i++)
       count[a[i]]++;
       
    printf("\nDuplicate character are :\n");
    for(int i=0; i<len; i++)
    {
      int cnt = 0;
      for(int j=0;j<i;j++) 
      if(a[i] == a[j])
      cnt++;  
    if(cnt == 1 && count[a[i]] > 1)
    printf("%c\n",a[i]);
    }
    
}
