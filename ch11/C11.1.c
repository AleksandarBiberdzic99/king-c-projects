//
//  main.c
//  11.1
//
//  Created by Aleksandar on 30. 7. 2026..
//

/*******************************************************************
 *  Chapter 11, Project 1                                          *
 *                                                                 *
 *  Reworks Chapter 2, Project 7 around a function that returns    *
 *  its results through pointers:                                  *
 *                                                                 *
 *      void pay_amount(int dollars, int *twenties, int *tens,     *
 *                      int *fives, int *ones);                    *
 *                                                                 *
 *  Given an amount in dollars, it works out the fewest $20, $10,  *
 *  $5 and $1 bills needed to pay it and stores each count in the  *
 *  variable the corresponding pointer refers to.                  *
 *******************************************************************/

#include <stdlib.h>
#include <stdio.h>

void pay_amount(int dollars, int *twenties, int *tens, int *fives, int *ones);

int main(int argc, const char * argv[]) {
    
    int dollars,twenties,tens,fives,ones;
    
    printf("Enter a dollar amount: ");
    scanf("%d",&dollars);
    
    pay_amount(dollars,&twenties,&tens,&fives,&ones);
    
    printf("$20 bills: %d\n",twenties);
    printf("$10 bills: %d\n",tens);
    printf("$5 bills: %d\n",fives);
    printf("$1 bills: %d\n",ones);
    
    return EXIT_SUCCESS;
}

void pay_amount(int dollars, int *twenties, int *tens, int *fives , int *ones)
{
    *twenties = dollars / 20;
    *tens = (dollars % 20) / 10;
    *fives = ((dollars % 20) % 10) / 5;
    *ones = ((dollars % 20 ) % 10) % 5;
}
