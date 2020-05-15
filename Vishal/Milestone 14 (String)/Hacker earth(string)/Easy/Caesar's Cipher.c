/*For example, with a shift of 3,
 D would be replaced by G, E would 
become H, X would become A and so on.*/
#include<stdio.h>
#include<string.h>
int main()
{
    int t,diff;
    scanf("%d",&t);
    while(t--)
      {  
        char S[100001],T[100001];
        scanf("%s",S);
        scanf("%s",T);
        int k = 0,diff,diff1;  
        diff = T[0] - S[0];
        if(diff<0)
        diff += 26;
        
        for(int i=1;i<strlen(S);i++)
             {
                diff1 = T[i] - S[i];
                if(diff1 < 0)
                diff1 += 26;
                if(diff != diff1)
                k = 1;     
             }
            if(k == 1)
            printf("-1\n");
            else
            printf("%d\n",diff);
        }
    
  return 0;
}