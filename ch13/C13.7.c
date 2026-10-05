//
//  main.c
//  C13.7
//
//  Created by Aleksandar on 22. 9. 2026..
//


/*********************************************************
 * Chapter 13, Project 7                                 *
 *                                                       *
 * Modified version of Chapter 5, Project 11. Prints the *
 * English word for a two-digit number, using arrays of  *
 * pointers to strings instead of switch statements      *
 * (the digit is used as an index into the array).       *
 *********************************************************/


#include <stdlib.h>
#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    const char *digit1[]={"twenty","thirty","forty","fifty","sixty","seventy","eighty","ninety"};
    const char *digit2[]={"","-one","-two","-three","-four","-five","-six","-seven","-eight","-nine"};
    
    const char *special_case[]={"ten","eleven","twelve","thirteen","fourteen","fifteen","sixteen",
    "seventeen","eighteen","nineteen"};
    
    int number,first_digit,second_digit;
    
    printf("Enter a two digit number: ");
    
    if(scanf("%d",&number)!=1)
    {
        printf("Invalid intput.\n");
        return EXIT_FAILURE;
    }
    
    
    if(number>9 && number<20)
        printf("You entered the number: %s",special_case[number-10]);
    else if(number>19 && number<100)
    {
        first_digit=number/10;
        second_digit=number%10;
        
        printf("You entered the number: %s%s",digit1[first_digit-2],digit2[second_digit]);
    }
    
    else
        printf("\nNumber should range from 10-99.Please try again.");
    
    printf("\n");
    
    return EXIT_SUCCESS;
}
