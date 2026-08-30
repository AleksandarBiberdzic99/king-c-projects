//
//  main.c
//  6.8
//
//  Created by Aleksandar on 18. 4. 2026..
//

/*******************************************************************
 *  Chapter 6, Project 8                                           *
 *                                                                 *
 *  Prints a one-month calendar. The user supplies the number of   *
 *  days in the month and the weekday it starts on.                *
 *                                                                 *
 *  Enter number of days in month: 31                              *
 *  Enter starting day of the week (1=Sun, 7=Sat): 3               *
 *                                                                 *
 *            1  2  3  4  5                                        *
 *      6  7  8  9 10 11 12                                        *
 *     13 14 15 16 17 18 19                                        *
 *     20 21 22 23 24 25 26                                        *
 *     27 28 29 30 31                                              *
 *                                                                 *
 *  A single for loop counts from 1 to n and prints each day; an   *
 *  if inside it emits a newline whenever the day falls at the     *
 *  end of a week.                                                 *
 *******************************************************************/


#include <stdlib.h>
#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int number_of_days,starting_day,i,j;
    
    printf("Enter number of days in month:");
    scanf("%d",&number_of_days);
    printf("Enter starting day of the week (1=Sun , 7=Sat):");
    scanf("%d",&starting_day);
    
    
    while(number_of_days<28 || number_of_days>31 || starting_day<1 || starting_day>7)
    {
        printf("\nInvalid input,please try again\n\n");
        printf("Enter number of days in month:");
        scanf("%d",&number_of_days);
        printf("Enter starting day of the week (1=Sun , 7=Sat):");
        scanf("%d",&starting_day);
    }
    
    
    
    
    for(j=1;j<starting_day;j++)
        printf("   ");
    
    for(i=1;i<=number_of_days;i++)
    {
        printf("%3d",i);
        
        if((starting_day-1+i)%7==0)
        {
            printf("\n");
        }
        
        
        
     }
    
    printf("\n");
    
    return EXIT_SUCCESS;
}
