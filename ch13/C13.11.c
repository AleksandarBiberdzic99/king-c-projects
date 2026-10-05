//
//  main.c
//  C13.11
//
//  Created by Aleksandar on 2. 10. 2026..
//


/*********************************************************
 * Chapter 13, Project 11                                                                                    *
 *                                                       *
 * Modified version of Chapter 7, Project 13. Computes                                 *
 * the average word length of a sentence using the                                       *
 * function compute_average_word_length, which returns                            *
 * the average length of the words in the string pointed                                *
 * to by sentence.                                                                                               *
 *********************************************************/


#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

#define MAX_LEN 100

double compute_average_word_length(const char *sentence);
void read_line(char *string);

int main(int argc, const char * argv[]) {
    
    char text[MAX_LEN+1];
    
    printf("Enter a sentence: ");
    read_line(text);
    printf("Average word length: %.1lf\n",compute_average_word_length(text));
    
    return EXIT_SUCCESS;
}



void read_line(char *string)
{
    int i=0;
    int ch;
    
    while(i++<MAX_LEN && (ch=getchar())!='\n' && ch!=EOF)
        *string++=ch;
    
    *string='\0';
    
}


double compute_average_word_length(const char *sentence)
{
    double word_length=0,word_length_sum=0,word_num=0;
    
    while(*sentence!='\0')
    {
        word_length=0;
        
        while(!isspace((unsigned char)*sentence) && *sentence!='\0')
        {
            word_length++;
            sentence++;
        }
        
        if(word_length>0)
        {
            word_length_sum+=word_length;
            word_num++;
        }
        while(isspace((unsigned char)*sentence))
            sentence++;
    }
    
    return word_length_sum/word_num;
    
}
