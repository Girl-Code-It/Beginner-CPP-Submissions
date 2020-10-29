

  
/*A string is called 'Sumit's String' 
  if distance between adjacent character is 1.*/
#include<stdio.h>

int adjacent(int a,int b)
{
    if((a == 122 && b == 97)|| (a == 97 && b == 122))
        return 1;

    else
        return abs(a - b);
}
void main()
{
    int t;
    scanf("%d",&t);
 while(t--)
  {
    char a[250];
    scanf("%s",a);
    int k=0;
    for(int i=0; a[i+1] != '\0'; i++)
    {
        if(adjacent(a[i],a[i+1]) != 1)
            k = 1;
    }
    if(k == 0)
        printf("YES\n");
    else
        printf("NO\n");
   }
   return 0;
}
