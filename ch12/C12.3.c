//
//  main.c
//  12.3
//
//  Created by Aleksandar on 29. 8. 2026..
//

/**********************************************************
 * Chapter 12, Project 3                                  *
 *                                                        *
 * Simplified version of Project 1(b), taking advantage   *
 * of the fact that an array name can be used as a        *
 * pointer to the first element of the array. Reads a     *
 * message one character at a time until the array is     *
 * full or a new-line character is entered, then prints   *
 * the message in reverse.                                *
 **********************************************************/

#include <stdlib.h>
#include <stdio.h>

#define LENGTH 100

int main(int argc, const char * argv[]) {
    
    char message[LENGTH];
    char *ch;
    
    // Reading user input and storing it inside array message[LENGTH]
    printf("Enter a message: ");
    
    for(ch=message;ch<message+LENGTH;ch++)
    {
        *ch=getchar();
        if(*ch=='\n')break;
    }
    
    // Printing array elements of the array message[LENGTH] from address of last element that isnt '\n' to the first one
    printf("Reversal is: ");
    
    for(ch--;ch>=message;ch--)
        putchar(*ch);
    
    
    putchar('\n');
    
    return EXIT_SUCCESS;
}
