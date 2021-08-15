//use of string function
#include<stdio.h>

int main()
{
    char a[20] = {'H','e','l','l','o'};
    
    char b[20] = "World";
    
    char c[40],d[40];
   // How to printf string using puts and printf function 

    puts(a);
    puts(b);
    printf("a = %s\nb = %s\n\n",a,b);
    
    //How to calculate length of string
    
    printf("length of a = %d\nlength of b = %d\n\n",strlen(a),strlen(b));
    
    //How to campare string 
    
    printf("Comparison of string\n");
    if(strcmp(a,b)==0)
    {
        printf("%s and %s are equal\n\n",a,b);
    }
    else
    printf("%s and %s are not equal\n\n",a,b);
    
    //How to copy string
    //string a is copied to c
    
    
    printf("copied string : \n%s\n\n",strcpy(c,a));
   
    //How to copy string
    //string a is copied to c upto n number
    
    
    printf("copied string upto 3 : \n%s\n\n",strncpy(d,a,3));
    
    //How to use strchr
    //Search char from starting 
    //if it get char in string then it printf string after those char including it
    //if it doesn't get those char in the string it print (null)
    
    printf("string after e : \n%s\n\n",strchr(a,'e'));
    
    printf("string after p : \n%s\n\n",strchr(a,'p'));
    
    //How to use strrchr
    //Search char from ending
    //if it get char in string then it printf string after those char including it
    //if it doesn't get those char in the string it print (null)
   
    printf("string after last l : \n%s\n\n",strrchr(a,'l'));

    //How to use strstr
    //Search string from ending
    //if it get string in the given string then it printf string after those string including it
    //if it doesn't get those string in the string it print (null)
    
    printf("string after rl : \n%s\n\n",strstr(b,"rl"));
    
    
    //How to concatenate string
   
    printf("concatenated string : \n%s\n\n",strcat(a,b));

   
    return 0;
}