#include <stdio.h>
 
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],flag=0;
    
    for(int i=0 ; i<n ; i++)
    scanf("%d",&a[i]);
    
    for(int i=0 ; i<n ; i++)
    {
        flag = 0;
        //Checking prime Number
        for(int j=2 ; j<=sqrt(a[i]) ; j++)
        {
            if(a[i] % j == 0)
            {
                flag = 1;
                break;
            }
        }
        // Printing Prime Nos 
        if(flag == 0)
        {
            printf("%d ",a[i]);
            a[i] = 0;
        }
        
    }
    
    printf("\n");
    
    // if nos are composite
    for(int i=n-1 ; i>=0 ; i--)
    {
        if(a[i] != 0)  
        printf("%d ",a[i]);  
    }
    
    return 0;
}