#include<stdio.h>
#include<math.h>
//Find Position of only set bit of a number
int main()
{
    int n;
    printf("Enter the Number : ");
    scanf("%d",&n);

    if(n & (n - 1))
        printf("Wrong Input...\n");
    else
    {
       int pos = 0;
    
       while(n)
       {
          n >>= 1;
          pos++;
       }
       printf("Position of Only Set bit : %d.\n",pos);
    }

    return 0;
}