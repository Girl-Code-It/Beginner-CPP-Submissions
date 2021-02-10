/*
Write a C program to enter a number and print it in words.

*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void getWords(int k)
{
    char n[20];
    sprintf(n, "%d", k); 
    if(atoi(n) >= 10000){ printf("Enter a number less than 10000"); exit(0);}

    int count = 0, l = strlen(n);

    char *twoDigits[] = { "zero", "one", "two", "three", "four","five",
     "six", "seven", "eight", "nine", "ten", "eleven", "twelve", "thirteen",
      "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};
    char *tensMultiple[] = {"", "", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"};
    

    if(atoi(n) < 20) 
    {printf("%s ",twoDigits[atoi(n)]);}
    else if(l == 2)
    {
        printf("%s ",tensMultiple[n[0] - '0']);
        if(n[1] - '0' != 0) printf("%s ",twoDigits[n[1] - '0']);

    }
    else if(l == 3)
    {
        for(int i = 0; i < l; i ++)
        {
            
            if(i == 0 && n[i] - '0' != 0) {printf("%s ",twoDigits[n[i] - '0']);
            if(l > 2 && n[i] - '0' != 0) printf("hundred ");}

            
            else if(i == 1 && n[i] - '0' != 0){
                if(n[i] == '1') printf("%s ",twoDigits[n[i+1] + 10 - '0']);
                else printf("%s ",tensMultiple[n[i] - '0']);}

            else if(i == 2 && n[i] - '0' != 0 && n[i-1] != '1') printf("%s ",twoDigits[n[i] - '0']);
        }
    }
    else if(l == 4)
    {
        for(int i = 0; i < l; i ++)
        {
            
            if(i == 0 && n[i] - '0' != 0) {printf("%s ",twoDigits[n[i] - '0']);
            if(n[i] - '0' != 0) printf("thousand ");}

            
            else if(i == 1 && n[i] - '0' != 0){ printf("%s ",twoDigits[n[i] - '0']);
            if(n[i] - '0' != 0) printf("hundred ");}

           
            else if(i == 2 && n[i] - '0' != 0){
                if(n[i] == '1') printf("%s ",twoDigits[n[i+1] + 10 - '0']);
                else printf("%s ",tensMultiple[n[i] - '0']);}

            else if(i == 3 && n[i] - '0' != 0 && n[i-1] != '1') printf("%s ",twoDigits[n[i] - '0']);
        }
    }
}
int main()
{
    int n;
    printf("Enter a number between 0 and 100: ");
    scanf("%d",&n);
    
    // for(int i = 0; i < n; i++)
    getWords(n); printf("\n");
    
    
    return 0;
}