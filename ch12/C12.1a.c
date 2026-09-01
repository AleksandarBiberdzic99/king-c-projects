//
//  main.c
//  12.1a
//
//  Created by Aleksandar on 29. 8. 2026..
//

/**********************************************************
 * Chapter 12, Project 1(a)                               *
 *                                                        *
 * Reads a message one character at a time using getchar, *
 * storing the characters in an array. Stops reading when *
 * the array is full or a new-line character is entered,  *
 * then prints the message in reverse.                    *
 **********************************************************/

#include <stdlib.h>
#include <stdio.h>

#define LENGTH 100

int main(int argc, const char * argv[]) {
    
    char message[LENGTH],ch;
    int n=0,i;
    
    printf("Enter a message: ");
    while(n<LENGTH && ((ch=getchar())!='\n'))
        message[n++]=ch;
    
    printf("Reversal is: ");
    
    for(i=n-1;i>=0;i--)
        putchar(message[i]);
    
    putchar('\n');
    
    return EXIT_SUCCESS;
}
