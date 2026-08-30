//
//  main.c
//  7.5
//
//  Created by Aleksandar on 7. 6. 2026..
//

/*******************************************************************
 *  Chapter 7, Project 5                                           *
 *                                                                 *
 *  Computes the Scrabble value of a word by summing the face      *
 *  values of its letters:                                         *
 *                                                                 *
 *      1: AEILNORSTU    2: DG    3: BCMP                          *
 *      4: FHVWY         5: K     8: JX     10: QZ                 *
 *                                                                 *
 *  Enter a word: pitfall                                          *
 *  Scrabble value: 12                                             *
 *                                                                 *
 *  Mixed case is accepted; toupper normalizes each letter first.  *
 *******************************************************************/


#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
int main(int argc, const char * argv[]) {
    
    char ch;
    int points=0;
    printf("Enter a word:");
    
    while((ch=getchar())!='\n')
    {
        ch=toupper(ch);
        switch(ch)
        {
            case 'A':
            case 'E':
            case 'I':
            case 'L':
            case 'N':
            case 'O':
            case 'R':
            case 'S':
            case 'T':
            case 'U':
                points+=1;
                break;
            case 'D':
            case 'G':
                points+=2;
                break;
            case 'B':
            case 'C':
            case 'M':
            case 'P':
                points+=3;
                break;
            case 'F':
            case 'H':
            case 'V':
            case 'W':
            case 'Y':
                points+=4;
                break;
            case 'K':
                points+=5;
                break;
            case 'J':
            case 'X':
                points+=8;
                break;
            case 'Q':
            case 'Z':
                points+=10;
                break;
            default:break;
            
        }
    }
    
    printf("Scrabble value:%d\n",points);
    
    return EXIT_SUCCESS;
}
