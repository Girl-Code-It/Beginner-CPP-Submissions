#include<stdio.h>

int main()
{
   int v[100000],n;
   char a[100000];
   scanf("%d",&n);

   while(n--)
   {  
      scanf("%s",a);
     int k = 0,cntstr = 0,cntrev = 0;
       for(int i=0;a[i] != '\0';i++)
        {
           if(a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u') 
            {
            v[k] = a[i] - 97;
            k++;
            }
        }
        for(int j=0;j<k-1;j++)
         {
            if(v[j] < v[j+1])
            cntstr++;
            else if(v[j] > v[j+1])
            cntrev++;
            else
            {
              cntstr++;
              cntrev++;      
            }       
         }
        if(cntstr == k-1 || k == 0)
        printf("Good\n");
        else if(cntrev == k-1)
        printf("Worst\n");
        else
        printf("Bad\n");
   }
  return 0;
}