//
//  main.c
//  8.13
//
//  Created by Aleksandar on 17. 6. 2026..
//

/*******************************************************************
 *  Chapter 8, Project 13                                          *
 *                                                                 *
 *  Extends Chapter 7, Project 11 so that the result is labelled.  *
 *                                                                 *
 *  Enter a first and last name: Lloyd Fosdick                     *
 *  You entered the name: Fosdick, L.                              *
 *                                                                 *
 *  Only the last name has to be buffered in a character array     *
 *  until the line can be printed; it is assumed to be at most     *
 *  20 characters long.                                            *
 *******************************************************************/


#include <stdlib.h>
#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    char surname[20],first_letter_name;
    int i=0,j;
    printf("Enter a first and last name:");
    
    first_letter_name=getchar();
    while(getchar()!=' ');
    
    while(i<20 && (surname[i]=getchar())!='\n')
        i++;

    
    printf("You entered the name:");
    for(j=0;j<i;j++)
        putchar(surname[j]);
    
    printf(", %c.\n",first_letter_name);
    
    return EXIT_SUCCESS;
}
