#include <stdlib.h>
#include <stdio.h>
#include <time.h>

enum Status {CONTINUE, WON, LOST};
int rollDice(void);

int main(){

    enum Status gameStatus;
    int mypoint;

    srand(time(NULL));
    int Sum = rollDice();

    switch(Sum){
        case 7:
        case 11:
            gameStatus = WON;
            break;

        case 2:
        case 3:
        case 4:
            gameStatus = LOST;
            break;
        
        default:
            mypoint = Sum;
            gameStatus = CONTINUE;
            break;
    }

        while(1){
            Sum = rollDice();

            if(Sum == mypoint){
                gameStatus = WON;
                break;
            }
            else if(Sum == 7){
                gameStatus = LOST;
                break;
            }
        }
        
        if(gameStatus == WON)
            printf("Player wins\n");
        else
            printf("Player losses\n");
}

int rollDice(void){
    int die1, die2, Sum;
    
    die1 = 1+(rand()%6);
    die2 = 1+(rand()%6);
    Sum = die1 + die2;

    printf("Player rolled %d + %d = %d\n", die1, die2, Sum);
    return Sum;

}
