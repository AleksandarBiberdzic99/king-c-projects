//
//  main.c
//  9.4
//
//  Created by Aleksandar on 1. 7. 2026..
//

#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

void read_word(int counts[26]);
bool equal_array(int counts1[21],int counts2[26]);


int main(int argc, const char * argv[]) {
    
    int first_word[26]={0},second_word[26]={0};
    
    printf("Enter first word:");
    read_word(first_word);
    
    printf("Enter second word:");
    read_word(second_word);
    
    if(equal_array(first_word,second_word))
    {
        printf("The words are anagrams.\n");
    }
    else
    {
        printf("Words are not anagrams.\n");
    }
    
    return EXIT_SUCCESS;
}

bool equal_array(int counts1[26],int counts2[26])
{
    int i,LENGTH=26;
    
    
    for(i=0;i<LENGTH && counts1[i]==counts2[i];i++);
    
    
    if(i==LENGTH)
        return 1;
    else
        return 0;
}


void read_word(int counts[26])
{
    int ch;
    
    while((ch=getchar())!='\n' && ch!=EOF)
    {
        if(isalpha(ch))
        {
            ch=tolower((unsigned char)ch);
            counts[ch-'a']++;
        }
    }
    
}
