//
//  main.c
//  12.1b
//
//  Created by Aleksandar on 28. 8. 2026..
//

/**********************************************************
 * Chapter 12, Project 1(b)                                                                                    *
 *                                                        *
 * Revised version of Project 1(a). Uses a pointer                                                *
 * instead of an integer to keep track of the current                                             *
 * position in the array. Reads a message one character                                     *
 * at a time using getchar, stopping when the array is                                          *
 * full or a new-line character is entered, then prints                                            *
 * the message in reverse.                                                                                     *
 **********************************************************/

#include <stdlib.h>
#include <stdio.h>

void read_message(char *a, int *n);
void reverse_message(char *a, int n);


int main(int argc, const char * argv[]) {
    
    char message[100];
    int n=0;
    
    printf("Enter a message: ");
    read_message(message,&n);
    reverse_message(message,n);
    
    
    printf("\n");
    
    return EXIT_SUCCESS;
}

void read_message(char *a, int *n)
{
    char *p=a;
    
    
    while(*n<100 && (*p++=getchar())!='\n')
    {
        (*n)++;
    }
    
    
}


void reverse_message(char *a, int n)
{
    char *p;
   
    for(p=a+n-1;p>=a;p--)
        putchar(*p);
    
}

