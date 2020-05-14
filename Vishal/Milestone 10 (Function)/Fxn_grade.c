#include <stdio.h>

void grade(x)
{
    if(x>100)
    printf("Invalid marks");
    else if(x>90&&x<=100)
    printf("AA");
    else if(x>80&&x<=90)
    printf("AB");
    else if(x>70&&x<=80)
    printf("BB");
    else if(x>60&&x<=70)
    printf("BC");
    else if(x>50&&x<=60)
    printf("CD");
    else if(x>40&&x<=50)
    printf("DD");
    else
    printf("FAIL");
}

void main()
{
    int marks;
    printf("Enter your marks out of 100 : ");
    scanf("%d",&marks);
 
    printf("Your grade is : ");
    grade(marks);
}



