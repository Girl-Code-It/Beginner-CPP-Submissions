#include<stdio.h>
#include<string.h>

void main()
{
    char hex[20];
    int decimal,temp,index,digit,count;
    printf("Enter any decimal no : ");
    scanf("%d",&decimal);
    temp = decimal;
    index = 1;
    while(temp!=0)
    {
        digit = temp%16;
        for(int i=0; i<16; i++)
        {
            if(digit<10)
            {
                hex[index] = (char)(digit+ 48);
            }
            else
            {
                hex[index] = (char)(digit+ 55);
            }
            index++;
            break;
        }
        temp/=16;
    }
    hex[index] ='\0';
    printf("Decimal no = %d\n",decimal);
    printf("Hexadecimal no = ");
    for(int i = index-1; i >= 0; i--)
        printf("%c",hex[i]);
}