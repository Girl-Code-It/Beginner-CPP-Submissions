#include <stdio.h>
#include <stdlib.h>
int cash=100;
void Play(int bet){
    char* C=(char*)malloc(10000*sizeof(char));
    C[0]='J';
    C[1]='Q';
    C[2]='K';
    
    printf("Shuffling......\n");
    
    int i;
    for(i=0;i<5;i++){
        int x = rand() % 3;
        int y = rand() % 3;
        int temp = C[x];
        C[x] = C[y];
        C[y] = temp; //swaps characters at position x and y
    }
    int playerGuess;
    printf("What's the position of queen-1,2, or 3?");
    scanf("%d",&playerGuess);
    if(C[playerGuess-1] == 'Q'){
        cash += 3*bet;
        printf("You win! Result = \" %C %C %C \"Total cash = %d\n",C[0],C[1],C[2],cash);
    }
    else{
        cash -= bet;
        printf("You loose! Result = \" %C %C %C \"Total cash = %d\n",C[0],C[1],C[2],cash);
    }
}
int main() {
   int bet;
   printf("Welcome to the Virtual Casino\n");
   printf("Total Cash = $%d\n",cash);
   while(cash > 0){
       printf("What's your bet? $");
       scanf("%d",&bet);
       if(bet==0 || bet>cash) break;
   }
}
