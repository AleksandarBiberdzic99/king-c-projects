//
//  main.c
//  8.11
//
//  Created by Aleksandar on 16. 6. 2026..
//

/*******************************************************************
 *  Chapter 8, Project 11                                          *
 *                                                                 *
 *  Extends Chapter 7, Project 4 so that the converted number is   *
 *  labelled rather than printed on its own.                       *
 *                                                                 *
 *  Enter phone number: 1-800-COL-LECT                             *
 *  In numeric form: 1-800-265-5328                                *
 *                                                                 *
 *  The number is held in a character array — either as entered    *
 *  or already converted — until the whole line can be printed.    *
 *  It is assumed to be at most 15 characters long.                *
 *******************************************************************/


#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

int main(int argc, const char * argv[]) {
    
    int i=0,j,length=15;
    unsigned char ch[length];
    
    
    printf("Enter phone number:");
    
    while((ch[i]=getchar())!='\n' && i<length)
        i++;
    
    printf("In numeric form:");
    
    for(j=0;j<i;j++)
    {
        switch(toupper(ch[j]))
        {
            case 'A':case'B':case'C':
                putchar('2');
                break;
            case 'D':case 'E':case 'F':
                putchar('3');
                break;
            case 'G':case 'H':case 'I':
                putchar('4');
                break;
            case 'J':case 'K':case 'L':
                putchar('5');
                break;
            case 'M':case 'N':case 'O':
                putchar('6');
                break;
            case 'P':case 'R':case 'S':
                putchar('7');
                break;
            case 'T':case 'U':case 'V':
                putchar('8');
                break;
            case 'W':case 'X':case'Y':
                putchar('9');
                break;
            default:
                putchar(ch[j]);
                break;
        }
    }
    
    printf("\n");
    
    
    
    return EXIT_SUCCESS;
}
