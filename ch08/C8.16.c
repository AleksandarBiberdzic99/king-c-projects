//
//  main.c
//  8.16
//
//  Created by Aleksandar on 18. 6. 2026..
//

/*******************************************************************
 *  Chapter 8, Project 16                                          *
 *                                                                 *
 *  Tests whether two words are anagrams — permutations of the     *
 *  same letters.                                                  *
 *                                                                 *
 *  Enter first word: smartest                                     *
 *  Enter second word: mattress                                    *
 *  The words are anagrams.                                        *
 *                                                                 *
 *  Enter first word: dumbest                                      *
 *  Enter second word: stumble                                     *
 *  The words are not anagrams.                                    *
 *                                                                 *
 *  An array of 26 counters tracks letter frequencies: the first   *
 *  word increments them, the second decrements them, and the      *
 *  words are anagrams if every counter ends at zero. Non-letters  *
 *  are ignored and case is disregarded (isalpha and tolower from  *
 *  <ctype.h>).                                                    *
 *******************************************************************/


#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#define LENGTH 26
#define TRUE 1
#define FALSE 0
int main(int argc, const char * argv[]) {
   
    int first_word[LENGTH]={0};
    int ch;
    int i,anagram=TRUE;
    
    printf("Enter first word:");
    
    while((ch=getchar())!='\n' && ch!=EOF)
    {
        if(isalpha(ch))
        {
            ch=tolower((unsigned char)ch);
            first_word[ch-'a']++;
        }
    }
    
    printf("Enter second word:");
    
    while((ch=getchar())!='\n' && ch!=EOF)
    {
        if(isalpha(ch))
        {
            ch=tolower((unsigned char)ch);
            first_word[ch-'a']--;
        }
    }
    
    for(i=0;i<LENGTH && anagram==TRUE;i++)
    {
        if(first_word[i]!=0)
            anagram=FALSE;
    }
    
    if(anagram==TRUE)
        printf("The words are anagrams.");
    else
        printf("The words are not anagrams.");
    
    
    printf("\n");
    
    return EXIT_SUCCESS;
}
