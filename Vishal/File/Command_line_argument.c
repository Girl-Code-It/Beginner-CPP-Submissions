#include<stdio.h>

main(int argc,char *argv[])
{
   
    printf("No. Of argument are : %d\n",argc);
  
    for(int i=0;i<argc;i++)
    {
      printf("List of argument are :%s",argv[i]);
    }
    return 0;
}


       
    
    