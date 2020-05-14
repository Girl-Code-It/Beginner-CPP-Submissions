#include<stdio.h>

int setBit[32];

int main()
{
    int t,n,x;
    scanf("%d",&t);
    
    while(t--)
    {
        scanf("%d",&n);
        int max = -1,ans = -1;
        for(int i=0;i<32;i++)
          setBit[i] = 0;
        
        //Store SetBit
        while(n--)
        {
           scanf("%d",&x);
          for(int i=0;i<32;i++)
           {
              if(x & (1 << i))
              setBit[i]++;
           }      
        }
        
        //Check the position
        for(int i=0;i<32;i++)
        {
           if(setBit[i] > max)
            {
              max = setBit[i];
              ans = i;
            }
        }
        
        printf("%d\n",ans);
    }
   return 0;
}