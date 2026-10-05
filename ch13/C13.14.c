//
//  main.c
//  C13.14
//
//  Created by Aleksandar on 3. 10. 2026..
//


/*********************************************************
 * Chapter 13, Project 14                                *
 *                                                       *
 * Modified version of Chapter 8, Project 16. Tests      *
 * whether two words are anagrams using the function     *
 * are_anagrams, which returns true if the strings       *
 * pointed to by word1 and word2 are anagrams.           *
 *********************************************************/



#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

#define LENGTH 26


bool are_anagrams(const char *word1, const char *word2);

int main(int argc, const char * argv[]) {
   
    char first_word[LENGTH+1]={0},second_word[LENGTH+1]={0};
    int ch;
    int i=0;
    for(;;)
    {
        printf("Enter first word:");
        
        while(i<LENGTH && (ch=getchar())!='\n' && ch!=EOF)
        {
            if(i==0 && ch=='0')
                return EXIT_SUCCESS;
            
            if(isalpha(ch))
            {
                first_word[i]=ch;
                i++;
            }
        }
        
        first_word[i]='\0';
        i=0;
        
        printf("Enter second word:");
        
        while(i<LENGTH && (ch=getchar())!='\n' && ch!=EOF)
        {
            if(i==0 && ch=='0')
                return EXIT_SUCCESS;
            
            if(isalpha(ch))
            {
                second_word[i]=ch;
                i++;
            }
        }
        
        second_word[i]='\0';
        i=0;
        
        
        if(are_anagrams(first_word,second_word))
            printf("Words are anagrams.");
        else
            printf("Words are not anagrams.");
        
        printf("\n");
    }
    return EXIT_SUCCESS;
}



bool are_anagrams(const char *word1, const char *word2)
{
    int letters_in_word[LENGTH]={0};
    int i;
    
    for(;*word1;word1++)
    {
        if(isalpha((unsigned char)*word1))
            letters_in_word[tolower((unsigned char)*word1)-'a']++;
    }
    for(;*word2;word2++)
        if(isalpha((unsigned char)*word2))
            letters_in_word[tolower((unsigned char)*word2)-'a']--;
       
    
    
    
    for(i=0;i<LENGTH;i++)
        if(letters_in_word[i]!=0)
            return false;
    
    return true;
}
