//
//  main.c
//  8.16
//
//  Created by Aleksandar on 18. 6. 2026..
//

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
