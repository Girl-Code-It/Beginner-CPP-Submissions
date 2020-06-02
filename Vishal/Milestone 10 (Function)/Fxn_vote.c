#include <stdio.h>

int check_vote(x)
{
    if(x>=18)
    return 1;
    else 
    return 0;
}

void main()
{
    int age,result;
    printf("Enter your age : ");
    scanf("%d",&age);
    result = check_vote(age);
    if(result == 1)
    printf("You are allowed to vote");
    else
    printf("You are not allowed to vote");
}



