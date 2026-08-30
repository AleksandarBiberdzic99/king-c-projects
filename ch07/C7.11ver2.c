//
//  main.c
//  7.11 ver2
//
//  Created by Aleksandar on 8. 6. 2026..
//

/*******************************************************************
 *  Chapter 7, Project 11                                          *
 *                                                                 *
 *  Reads a first and last name and prints the last name, a        *
 *  comma, and the first initial followed by a period.             *
 *                                                                 *
 *  Enter a first and last name: Lloyd Fosdick                     *
 *  Fosdick, L.                                                    *
 *                                                                 *
 *  Extra spaces before the first name, between the names, and     *
 *  after the last name are tolerated.                             *
 *******************************************************************/


#include <stdlib.h>
#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    char current_char,first_initial;
    
    printf("Enter a first and last name:");
    
    do{
        current_char=getchar();
    }
    while(current_char==' ');
    
    first_initial=current_char;
    
    while((current_char=getchar())!=' ' && current_char!='\n')
        ;
    
    do {
        putchar(current_char);
        current_char=getchar();
    } while (current_char!=' ' && current_char!='\n');
    
    printf(", %c.\n",first_initial);
    return EXIT_SUCCESS;
}
