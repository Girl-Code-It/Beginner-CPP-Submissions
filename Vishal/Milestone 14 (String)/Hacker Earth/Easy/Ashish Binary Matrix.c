#include <stdio.h>
#include<string.h>
int main()
{
    int t,n,m;
    scanf("%d",&t);
 while(t--)
  {   
    int count = 0;
    scanf("%d%d",&n,&m);
    char a[1000][1000];
    for(int i=0;i<n;i++)
    {
      scanf("%s",&a[i]);
      for(int j=0;j<i;j++) 
       {
         if(strcmp(a[i],a[j]) == 0)
          count++;
       }
    }
    if(count>0)
    printf("No\n");
    else
    printf("Yes\n");
  }
    return 0;
}