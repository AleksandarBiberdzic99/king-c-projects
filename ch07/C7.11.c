//
//  main.c
//  7.11
//
//  Created by Aleksandar on 7. 6. 2026..
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
    
    int counter=0;
    char ch_current,first_letter_of_first_name;
    
    printf("Enter a first name and last name:");
    
    while(counter<1)
    {
        first_letter_of_first_name=getchar();
        counter++;
    }
    
    while(getchar()!=' ')
        ;
    
    while((ch_current=getchar())!='\n')
    {
        if(ch_current!=' ')
        putchar(ch_current);
    }
    
    printf(",%c.\n",first_letter_of_first_name);
    
    return EXIT_SUCCESS;
}
