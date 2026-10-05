//
//  main.c
//  C13.16
//
//  Created by Aleksandar on 4. 10. 2026..
//


/*********************************************************
 * Chapter 13, Project 16                                *
 *                                                       *
 * Modified version of Chapter 12, Project 1. Reverses a *
 * message using the function reverse, which reverses    *
 * the string pointed to by message in place by swapping *
 * characters with two pointers moving toward each other *
 * until they meet.                                      *
 *********************************************************/


#include <stdlib.h>
#include <stdio.h>

void read_message(char *string);
void reverse(char *messsage);

int main(int argc, const char * argv[]) {
    
    char message[100];

    
    printf("Enter a message: ");
    read_message(message);
    printf("Reversal is: ");
    reverse(message);
    
    
    printf("\n");
    
    return EXIT_SUCCESS;
}

void read_message(char *string)
{
    int ch;
    
    while((ch=getchar())!='\n' && ch!=EOF)
        *string++=ch;
    
    *string='\0';
}


void reverse(char *string)
{
    char *start=string;
    char *end=string;
    
    for(;*end!='\0';end++)
        ;
    for(;end!=start;end--)
        putchar(*end);
    
    putchar(*end);
    putchar('\n');
}

