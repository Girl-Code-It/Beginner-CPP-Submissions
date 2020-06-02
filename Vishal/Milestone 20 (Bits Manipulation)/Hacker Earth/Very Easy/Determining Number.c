#include<stdio.h>
 
int main()
{
   int n;
   scanf("%d",&n);
 
   int a[n];
   for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    
    int XOR = a[0];
    int setBitXOR;
    //Let x & y are the unique no
    int x = 0,y = 0;
    
    for(int i=1;i<n;i++)
       XOR ^= a[i];
    
    setBitXOR = XOR & ~(XOR - 1);
    
    for(int i=0;i<n;i++)
    {
       if(a[i] & setBitXOR)
       x ^= a[i];
       else
       y ^= a[i];
    }
   (x > y) ? printf("%d %d\n",y,x) : printf("%d %d\n",x,y);
}