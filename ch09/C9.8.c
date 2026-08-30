//
//  main.c
//  9.8
//
//  Created by Aleksandar on 1. 7. 2026..
//

#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <time.h>
#include <ctype.h>

int roll_dice(void);
bool play_game(void);


int main(int argc, const char * argv[]) {
    
    int wins=0,loses=0;
    char again='y';
    
    srand((unsigned int)time(NULL));
    
    
    while(again=='y')
    {
        if(play_game())
        {
            printf("You win!\n");
            wins++;
            
        }
        else
        {
            printf("You lose!\n");
            loses++;
        }
        printf("Play again? ");
        again=getchar();
        again=tolower(again);
        getchar();
        
        
    }
    
    printf("Wins: %d   Losses: %d\n",wins,loses);
    
    
    return EXIT_SUCCESS;
}

int roll_dice(void)
{
    int random_number_on_dice1=0,random_number_on_dice2=0;
    
    while(random_number_on_dice1==0)
    random_number_on_dice1=rand()%7;
    
    while(random_number_on_dice2==0)
    random_number_on_dice2=rand()%7;
    
    return random_number_on_dice1 + random_number_on_dice2;
}


bool play_game(void)
{
    int point=roll_dice();
    int point2;
    
    printf("You rolled: %d\n",point);
    
    
    if(point==7 || point==11)
    {
        
        return true;
    }
    else if (point==2 || point==3 || point==12)
    {
        
        return false;
    }
    else
    {
       printf("Your point is: %d\n",point);
       while((point2=roll_dice())!=point)
       {
           printf("You rolled: %d\n",point2);
           if(point2==7){return false;}
           
           
       }
        printf("You rolled: %d\n",point2);
        return true;
    }
    
    
    
}
