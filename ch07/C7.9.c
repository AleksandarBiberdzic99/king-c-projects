//
//  main.c
//  7.9
//
//  Created by Aleksandar on 7. 6. 2026..
//

/*******************************************************************
 *  Chapter 7, Project 9                                           *
 *                                                                 *
 *  Reads a time on the 12-hour clock and prints the 24-hour       *
 *  equivalent. The input format is the one described in           *
 *  Project 8.                                                     *
 *                                                                 *
 *  Enter a 12-hour time: 9:11 PM                                  *
 *  Equivalent 24-hour time: 21:11                                 *
 *******************************************************************/


#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

int main(int argc, const char * argv[]) {
    int hours,minutes;
    char day_period;
    
    // Data input
    printf("Enter a 12-hour time:");
    scanf("%d:%d %c",&hours,&minutes,&day_period);
    
    //TIME FORMAT CHECK
    if(hours>12 || ((toupper(day_period)!='A') &&  (toupper(day_period)!='P')) )
    {
        printf("Wrong time format. Please try again.\n");
        return 1;
    }
    
    // 12-hour to 24-hour time format conversion
    
    if(toupper(day_period)=='A')
    {
        
         if(hours==12)
            hours=0;
    }
    
    else
    {
        if (hours<12)
            hours+=12;
    }
    
  
    // Output
    
    printf("Equivalent 24-hour time: %.2d:%.2d\n",hours,minutes);
        
    
        
            
            
    return EXIT_SUCCESS;
}
