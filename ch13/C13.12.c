//
//  main.c
//  C13.12
//
//  Created by Aleksandar on 2. 10. 2026..
//


/*********************************************************
 * Chapter 13, Project 12                                                                                    *
 *                                                       *
 * Modified version of Chapter 8, Project 14. Reverses                                   *
 * the words in a sentence, storing the words in a                                          *
 * two-dimensional char array as it reads the sentence                                  *
 * (one word per row, each terminated by a null                                              *
 * character). The sentence contains no more than 30                                   *
 * words, and no word is longer than 20 characters.                                       *
 *********************************************************/


#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

#define MAX_WORDS 30
#define MAX_WORD_LEN 20

int read_line(char strings[][MAX_WORD_LEN+1], char *terminating_ch);
void reverse_sentence(char strings[][MAX_WORD_LEN+1], char *terminating_ch, int length);

int main(int argc, const char * argv[]) {
    
    int n;
    char sentence[MAX_WORDS][MAX_WORD_LEN+1]={'\0'};
    char terminating_character='\0';
    
    printf("Enter a sentence: ");
    n=read_line(sentence, &terminating_character);
    
    printf("Reversal of sentence: ");
    reverse_sentence(sentence,&terminating_character,n);
    
    return EXIT_SUCCESS;
}

int read_line(char strings[][MAX_WORD_LEN+1] , char *terminating_ch)
{
    int i=0,j=0;
    int ch;
    bool was_charachter=false;
    
    while(i<MAX_WORDS && (ch=getchar())!='\n' && ch!=EOF)
    {
        if(ch=='.' || ch=='!' || ch=='?')
        {
            *terminating_ch=ch;
            
            break;
        }
        
        else if(!isspace(ch))
        {
            if(j < MAX_WORD_LEN)
            strings[i][j++]=ch;
            
            was_charachter=true;
        }
        else if(was_charachter==true)
        {
            was_charachter=false;
            strings[i++][j]='\0';
            j=0;
        }
    }
    
    if(was_charachter==true){strings[i][j]='\0';i++;}
    
    return i;
}


void reverse_sentence(char strings[][MAX_WORD_LEN+1], char *terminating_ch,int length)
{
    int i;
    
    for(i=length-1;i>=0;i--)
    {
        printf("%s",strings[i]);
        if(i>0) printf(" ");
    }
    if(*terminating_ch)
        putchar(*terminating_ch);

}
