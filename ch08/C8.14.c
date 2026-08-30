//
//  main.c
//  8.14
//
//  Created by Aleksandar on 17. 6. 2026..
//

/*******************************************************************
 *  Chapter 8, Project 14                                          *
 *                                                                 *
 *  Prints the words of a sentence in reverse order.               *
 *                                                                 *
 *  Enter a sentence: you can cage a swallow can't you?            *
 *  Reversal of sentence: you can't swallow a cage can you?        *
 *                                                                 *
 *  Characters are read one at a time into a char array until a    *
 *  period, question mark or exclamation point appears; that       *
 *  terminating character is kept aside. A second loop then walks  *
 *  backwards through the array, finding and printing one word at  *
 *  a time until the start is reached, and the terminating         *
 *  character is printed last.                                     *
 *******************************************************************/


#include <stdlib.h>
#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    char sentence[100];
    char terminating_charachter='\0';
    int i=0,length,beggining_of_word,word_length,beggining_of_word_temp;
    int ch;
    printf("Enter a sentence:");
    
    /*
     * Read characters into sentence[] until a newline is encountered.
     * Store any sentence-ending punctuation ('.', '!', '?')
     * and determine the sentence length.
     */
    while(i<99 && (ch=getchar())!='\n')
    {
        if(ch=='.' || ch=='!' || ch=='?')
            terminating_charachter=ch;
        else
        {
            sentence[i]=ch;
            
            i++;
        }
            
    }
    
   
    length=i;
    

    beggining_of_word=length-1;
    
    printf("Reversal of sentence:");
    
    /* Process the sentence from the end toward the beginning. */
    while(length>0)
    {
        i=0;
        
        word_length=0;
        /* Locate the beginning of the current word while scanning backward. */
        while(beggining_of_word>=0  && sentence[beggining_of_word]!=' ')
        {
            beggining_of_word--;
            word_length++;
            length--;
            
        }
        
        
        
        beggining_of_word_temp=beggining_of_word+1;
        /* Print the word starting from the calculated position. */
        while(i<word_length)
        {
            putchar(sentence[beggining_of_word_temp++]);
            i++;
        }
        
        /*
         * Print a single space between words and
         * move to the beginning of the previous word.
         */
        if(beggining_of_word>0 && sentence[beggining_of_word]==' ')
        {
            putchar(' ');
            beggining_of_word--;
        }
        length--;
        
        
        
    }
    
    /* Print the stored sentence-ending punctuation, if any. */
    if (terminating_charachter != '\0')
    {
        putchar(terminating_charachter);
    }
    printf("\n");
    
    return EXIT_SUCCESS;
}
