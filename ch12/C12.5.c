//
//  main.c
//  12.5
//
//  Created by Aleksandar on 29. 8. 2026..
//

/**********************************************************
 * Chapter 12, Project 5                                  *
 *                                                        *
 * Modified version of Programming Project 14 from        *
 * Chapter 8. Uses a pointer instead of an integer to     *
 * keep track of the current position in the array that   *
 * contains the sentence. Reads a sentence entered by     *
 * the user and displays it with the words in reverse     *
 * order.                                                 *
 **********************************************************/

#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

#define LENGTH 100

int main(int argc, const char * argv[]) {
    
    char words[LENGTH];
    char terminating_charachter='\0';
    char *left,*right,*p;
    int ch;
    
    printf("Enter a sentence: ");
    
    right=&words[0];
    
    /* User input is proccessed in such way that all  charachters that are letters and white space are stored inside array words[LENGTH] and charachters '.' '!' '?' inside variable named terminating_charachter */
    while((ch=getchar())!='\n' && ch!=EOF)
    {
        ch=tolower(ch);
        if((ch>='a' && ch<='z') || ch==' ' || ch=='\'')
            *right++=ch;
        else
            terminating_charachter=ch;
        
    }
    
    // Printing words in reversal
    
    printf("Reversal of sentebce: ");
    
    right--;
    left=right;
    
    while(left>=words)
    {
        
        while(left>=words && *left!=' ')
            left--;
        
        for(p=left+1;p<=right;p++)
            putchar(*p);
        
        while(left>=words && *left==' ')
            putchar(*left--);
        
        for(right--;right>left;right--);
        
        
        
    }
    
    putchar(terminating_charachter);
    putchar('\n');

    
    return EXIT_SUCCESS;
}
