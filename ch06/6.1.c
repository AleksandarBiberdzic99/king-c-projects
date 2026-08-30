//
//  main.c
//  6.1
//
//  Created by Aleksandar on 15. 4. 2026..
//

/*******************************************************************
 *  Chapter 6, Project 1                                           *
 *                                                                 *
 *  Reads numbers one at a time until the user enters 0 or a       *
 *  negative value, then prints the largest number entered.        *
 *                                                                 *
 *  Enter a number: 60                                             *
 *  Enter a number: 38.3                                           *
 *  Enter a number: 4.89                                           *
 *  Enter a number: 100.62                                         *
 *  Enter a number: 75.2295                                        *
 *  Enter a number: 0                                              *
 *  The largest number entered was 100.62                          *
 *                                                                 *
 *  The input is not restricted to integers.                       *
 *******************************************************************/


#include <stdlib.h>
#include <stdio.h>

int main(int argc, const char * argv[]) {
   
    float input,max;
    
    printf("Enter a number:");
    scanf("%f",&input);
    max=input;
    
    while(input>0)
    {
        printf("Enter a number:");
        scanf("%f",&input);
        if(input>max)
            max=input;
    }
    
    printf("\nThe largerst number entered is %f\n",max);
    
    
    return EXIT_SUCCESS;
}

