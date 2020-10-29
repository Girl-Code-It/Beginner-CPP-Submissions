#include<stdio.h>
#define ll long long

ll hack(ll n)
{
  if(n == 1)
  return 1;

  return ((n%10 == 0 ? hack(n/10) : 0) || (n%20 == 0 ? hack(n/20) : 0));
}
int main()
{
   int t;
   scanf("%d",&t);
   ll n;
  while(t--)
  {
    scanf("%lld",&n);
    if(hack(n))
    printf("Yes\n");
    else
    printf("No\n");
  }
   return 0;
}