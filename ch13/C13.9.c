//
//  main.c
//  C13.9
//
//  Created by Aleksandar on 22. 9. 2026..
//

/*********************************************************
 * Chapter 13, Project 9                                                                                     *
 *                                                       *
 * Modified version of Chapter 7, Project 10. Counts the                                *
 * vowels in a sentence using the function                                                      *
 * compute_vowel_count, which returns the number of                                 *
 * vowels in the string pointed to by sentence.                                               *
 *********************************************************/

#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

#define MAX_LEN 100

int compute_vowel_count(const char *sentence);
void read_line(char *string, int length);

int main(int argc, const char * argv[]) {
    
    char sentence[MAX_LEN+1];
    
    printf("Enter a sentence: ");
    
    read_line(sentence,MAX_LEN);
    
    printf("Your sentence contains %d vowels.\n",compute_vowel_count(sentence));
    
    return EXIT_SUCCESS;
}


void read_line(char string[], int length)
{
    int ch;
    int i=0;
    
    while(i<length && (ch=getchar())!='\n' && ch!=EOF)
    {
        string[i++]=ch;
    }
    
    string[i]='\0';
    
}




int compute_vowel_count(const char *sentence)
{
    int count=0;
    
    while(*sentence)
    {
        switch(tolower((unsigned char)*sentence))
        {
            case 'a':case 'e':case 'i':case 'o': case 'u':
                count+=1;
                break;
        }
        sentence++;
    }
    
    return count;
}
