//
//  main.c
//  C13.1
//
//  Created by Aleksandar on 10. 9. 2026..
//

/*********************************************************
 * Chapter 13, Project 1                                                                                      *
 *                                                       *
 * Finds the "smallest" and "largest" word in a series                                     *
 * of words (dictionary order). Input stops when the                                       *
 * user enters a four-letter word. No word is longer                                         *
 * than 20 letters.                                                                                                *
 *********************************************************/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_LENGTH 20

int read_string(char *string1);


int main(int argc, const char * argv[]) {
    
    char smallest_word[MAX_LENGTH+1]="zzzzzzzzzzzzzzzzzzzz",largest_word[MAX_LENGTH+1]={'\0'};
    char word[MAX_LENGTH+1];
    int charachters_num;
    
    for(;;)
    {
        printf("Enter word: ");
        
            charachters_num=read_string(word);
            
            if(strcmp(word,largest_word)>0) strcpy(largest_word,word);
            if(strcmp(word,smallest_word)<0) strcpy(smallest_word,word);
            if(charachters_num==4) break;
            
    }
    
    printf("\nSmallest word: %s\n",smallest_word);
    printf("Largest word: %s\n",largest_word);
    
    
   
    return EXIT_SUCCESS;
}

int read_string(char *string1)
{
    int i=0;
    int ch;
    
    for(;;)
    {
        while((ch=getchar())!='\n' && ch!=EOF)
        {
            if(isalpha((unsigned char)ch) && i<MAX_LENGTH)
            {
                *string1++=ch;
                i++;
            }
        }
        *string1='\0';
        
        if(i>0) return i;
        if(ch==EOF) return -1;
        
        printf("Enter word: ");
    }
  
}



