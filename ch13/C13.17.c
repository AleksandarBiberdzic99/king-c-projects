//
//  main.c
//  C13.17
//
//  Created by Aleksandar on 4. 10. 2026..
//


/*********************************************************
 * Chapter 13, Project 17                                *
 *                                                       *
 * Modified version of Chapter 12, Project 2. Checks     *
 * whether a message is a palindrome using the function  *
 * is_palindrome, which returns true if the string       *
 * pointed to by message is a palindrome.                *
 *********************************************************/


#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

#define LENGTH 100

bool is_palindrome(const char *message);


int main(int argc, const char * argv[]) {
    
    char message[LENGTH];
    char ch;
    int n;
    
    while(1)
    {
        n=0;
        printf("Enter a message: ");
        
        //Read characters until newline or array is full
        
        while(n<LENGTH && (ch=getchar())!='\n')
        {
            ch=tolower((unsigned char)ch);
            if(ch>='a' && ch<='z')
                message[n++]=ch;
        }
        message[n]='\0';
        
        if(is_palindrome(message))
            printf("Palindrome.");
        else
            printf("Not a palindrome.");
        
        printf("\n");
    }
    return EXIT_SUCCESS;
}



bool is_palindrome(const char *message)
{
    const char *left=message,*right=message;
    
    for(;*right!='\0';right++)
            ;
    right--;
    
    while(left<right)
    {
        if(*left!=*right)
            return false;
        left++;
        right--;
    }
    
    if(*left!=*right)
        return false;
    
    return true;
}
