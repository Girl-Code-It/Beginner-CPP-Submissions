#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int main()
{
    int i=0,play,s,player_point=0,Comp_point=0;
    char name[20];
    printf("Enter Player name\n");
    gets(name);
    printf("Enter 0 for rock\n");
    printf("Enter 1 for paper\n");
    printf("Enter 2 for scissor\n\n");

    srand(time(NULL));
    while(i<3)
    {
        printf("%s turn\nEnter No. : ",name);
        scanf("%d",&play);
        printf("Computer turn\nEnter No. : ");
        s=rand()%3;
        printf("%d",s);
        if(play==0&&s==1)
            Comp_point++;
        else if(play==0&&s==2)
            player_point++;
        else if(play==1&&s==0)
            player_point++;
        else if(play==1&&s==2)
            Comp_point++;
        else if(play==2&&s==0)
            Comp_point++;
        else if(play==2&&s==1)
            player_point++;
        i++;
        printf("\n");
    }
    if(player_point>Comp_point)
        printf("%s wins",name);
    else if(player_point==Comp_point)
        printf("Match draw");
    else
        printf("%s loses",name);

    return 0;
}