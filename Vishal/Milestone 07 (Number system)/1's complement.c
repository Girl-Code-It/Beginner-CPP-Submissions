
#include <stdio.h>
#include<string.h>
int main()
{
        int length;
        char binary[100],ones[100] ;
 
        printf("Enter binary no \n ");
        scanf("%s",&binary);
 
        length = strlen(binary );
        
 
        for(int i=0;i<length;i++)
        {
                if(binary[i]=='0')
                {
                          ones[i]='1';
                 }
                 else
                 {
                          ones[i]='0';
                 }
        }
 
        printf("\nOne's complement of %s is  %s.",binary,ones); 
        return 0;
}

    