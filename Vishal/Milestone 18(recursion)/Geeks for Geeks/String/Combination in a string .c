#include<stdio.h>

void strCombination(char* input,int index,char *output,int length)
{
   //No more digit is remaining in the input 
   if(input[index] == '\0')
   {
      output[length] == '\0';
      printf("%s\n",output);
      return;
   }
   //Copy the current digit in output
   output[length] = input[index];
   //Add space
   output[length+1] = ' ';

   //Call the function 
   strCombination(input,index+1,output,length+2);

   //If next digit exist ,without adding space
   if(input[index+1] != '\0')
   strCombination(input,index+1,output,length+1);
  
}
int main()
{
   char input[40],output[100];
   printf("Enter the No : ");
   scanf("%s",input);
   output[0] = '\0';
   strCombination(input,0,output,0);
   return 0;
}