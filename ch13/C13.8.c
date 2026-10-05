//
//  main.c
//  C13.8
//
//  Created by Aleksandar on 22. 9. 2026..
//

/*********************************************************
 * Chapter 13, Project 8                                                                                     *
 *                                                       *
 * Modified version of Chapter 7, Project 5. Computes                                   *
 * the SCRABBLE value of a word using the function                                      *
 * compute_scrabble_value, which returns the value of                                 *
 * the string pointed to by word.                                                                       *
 *********************************************************/

#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

#define MAX_WORD_LEN 30

int compute_scrabble_value(const char *word);

int main(int argc, const char * argv[]) {
    
    char word[MAX_WORD_LEN+1];
    
    printf("Enter a word: ");
    if(scanf("%30s",word)==1)
    {
        
        printf("Scrabble value: %d\n",compute_scrabble_value(word));
        return EXIT_SUCCESS;
    }
    
    printf("Error reading input.\n");
    return EXIT_FAILURE;
}

int compute_scrabble_value(const char *word)
{
    static const int values[26]={1,3,3,2,1,4,2,4,1,8,5,1,3,1,1,3,10,1,1,1,1,4,4,8,4,10};
    int points=0;
    while(*word)
    {
        if(isalpha((unsigned char)*word))
        {
            points+=values[tolower((unsigned char)*word)-'a'];
        }
        
        word++;
    }
    
    return points;
}
