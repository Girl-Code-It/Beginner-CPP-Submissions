#include<stdio.h>
#include<math.h>
int main()
{
  int t;
  scanf("%d",&t); 
while(t--)
 {
  char a[5001];
  scanf("%s",&a);
  int cnt_sq = 0,cnt_rnd = 0,cnt_crl = 0;
  for(int i=0;i<strlen(a);i++)
  {
    if(a[i] == '[')
    cnt_sq++;
    else if(a[i] == ']')
    cnt_sq--;
    else if(a[i] == '(')
    cnt_rnd++;
    else if(a[i] == ')')
    cnt_rnd--;
    else if(a[i] == '{')
    cnt_crl++;
    else if(a[i] == '}')
    cnt_crl--;  
  }
  printf("%d\n",(strlen(a) - abs(cnt_sq) - abs(cnt_rnd) - abs(cnt_crl)));
 }
  return 0;
}
    