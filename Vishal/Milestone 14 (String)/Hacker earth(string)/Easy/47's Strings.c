#include<stdio.h>
#define ll long long 
int main()
{
  int t;
  scanf("%d",&t);
  
while(t--)
 {
  char a[1000001];
  scanf("%s",&a);
  ll n = 0,ans = 0;
  for(ll i=0;i<strlen(a);i++)
  {
    if(a[i] == '$' || a[i] == '&')
    n = i + 1;
    ans += n;
  }
  printf("%lld\n",ans);
 }
  return 0;
}
    