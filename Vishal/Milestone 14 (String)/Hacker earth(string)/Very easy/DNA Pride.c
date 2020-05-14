#include<stdio.h>
#include<string.h>
int main()
{
  long t;
  scanf("%d",&t);
 while(t--)
 {
  char a[1000000];
  long long k;
  int R = 0;
  scanf("%d",&k);
  scanf("%s",&a);
  
  for(long long i=0; i<k; i++)
  {
     if(a[i] == 'U')
       R = 1;
  }
  if(R == 1)
  printf("Error RNA nucleobases found!");
  else
  {
    for(long long i=0; i<k; i++)
  {
     if(a[i] == 'A')
       a[i] = 'T';
     else if(a[i] == 'T')
      a[i] = 'A';
     else if(a[i] == 'G')
       a[i] = 'C';
      else
       a[i] = 'G';
  }
   printf("%s\n",a);
  }
 }
    return 0;
}