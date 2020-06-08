
#include<stdio.h>
#include<string.h>

int hexadecimalToDecimal(char hexVal[]) 

{    

    int len = strlen(hexVal); 
    int base = 1,dec_val = 0;

    for (int i=len-1; i>=0; i--) 
    {  
        if (hexVal[i]>='0' && hexVal[i]<='9') 
        { 
            dec_val += (hexVal[i] - 48)*base; 
            base = base * 16; 
        } 
        else if (hexVal[i]>='A' && hexVal[i]<='F') 
        { 
            dec_val += (hexVal[i] - 55)*base; 
            base = base*16; 
        } 
    } 
    return dec_val;
} 

int main()
{   
   int decimal;
   char hex[20] ;
   printf("Enter any hexadecimal no : ");
   scanf("%s",&hex);
   decimal = hexadecimalToDecimal(hex);
   printf("Hexadecimal no = %s\n",hex);
   printf("Decimal no = %d\n",decimal);
   return 0;
}

