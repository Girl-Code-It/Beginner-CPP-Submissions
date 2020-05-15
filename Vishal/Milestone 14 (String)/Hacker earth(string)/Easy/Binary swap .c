/*To count minimum no of operation 
  To convert string b to a*/
#include <stdio.h>
#include<string.h>
int main()
{
    char a[100001],b[100001];
    scanf("%s",&a);
    scanf("%s",&b);
    long long len_a = strlen(a);
    long long count1a = 0,count1b = 0,count = 0,temp;
    for(long long i=0; i<len_a; i++)
    {
        if(a[i] == '1')
        count1a++;
        if(b[i] == '1')
        count1b++;
    }
    if(count1a != count1b)
    {
    printf("-1");
    return 0;
    }
    for(long long i=0;i<len_a; i++)
    {
      if(a[i] != b[i]) 
          count++;
    }
    if(count%2 == 0)
    printf("%lld",count/2);
    else
    printf("-1");
    return 0;
}