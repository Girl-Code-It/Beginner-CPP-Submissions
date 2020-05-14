#include<stdio.h>

int main()
{
   int n;
   char a[160];
   scanf("%d",&n);

  while(n--)
  {
    scanf(" %s",a);
    int cntSUVO = 0,cntSUVOJIT= 0;
    for(int i=0;i<strlen(a);i++)
    {
     if(a[i] == 'S' && a[i+1] == 'U' && a[i+2] == 'V' && a[i+3] == 'O')
       {
            if(a[i+4] == 'J' && a[i+5] == 'I' && a[i+6] == 'T')
            {
            cntSUVOJIT++;
            i = i + 6;
            }
            else
            {
            cntSUVO++;
             i = i + 3;
            }
       } 
    }
    printf("SUVO = %d, SUVOJIT = %d\n",cntSUVO,cntSUVOJIT);
  }
  return 0;
}