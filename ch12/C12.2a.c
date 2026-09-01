//
//  main.c
//  12.2
//
//  Created by Aleksandar on 29. 8. 2026..
//

/**********************************************************
 * Chapter 12, Project 2(a)                                                                                    *
 *                                                        *
 * Reads a message entered by the user and checks whether                            *
 * it is a palindrome, ignoring any characters that are                                           *
 * not letters and treating upper-case and lower-case                                          *
 * letters as equivalent. Displays either "Palindrome"                                            *
 * or "Not a palindrome".                                                                                       *
 **********************************************************/

#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

#define LENGTH 100

int main(int argc, const char * argv[]) {
    
    char message[LENGTH];
    char ch;
    int i,n=0;
    
    printf("Enter a message: ");
    
    //Read characters until newline or array is full
    
    while(n<LENGTH && (ch=getchar())!='\n')
    {
        ch=tolower((unsigned char)ch);
        if(ch>='a' && ch<='z')
            message[n++]=ch;
    }
    
    // Check whether text is a palindrome
    
    for(i=0;i<n/2;i++)
        if(message[i]!=message[n-1-i])i=n;
    
    if( i == n/2 ) printf("Palindrome.");
    else printf("Not a palindrome.");
        
        
        printf("\n");
    
    return EXIT_SUCCESS;
}
