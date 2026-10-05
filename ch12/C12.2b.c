//
//  main.c
//  12.2b
//
//  Created by Aleksandar on 29. 8. 2026..
//

/**********************************************************
 * Chapter 12, Project 2(b)                               *
 *                                                        *
 * Revised version of Project 2(a). Uses pointers instead *
 * of integers to keep track of positions in the array.   *
 * Reads a message entered by the user and checks whether *
 * it is a palindrome, ignoring characters that are not   *
 * letters and treating upper-case and lower-case letters *
 * as equivalent.                                         *
 **********************************************************/

#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

#define LENGTH 100

int main(int argc, const char * argv[]) {
    
    char message[LENGTH];
    char *start,*end=message;
    char charachter;
    
    
    printf("Enter a message: ");
    
    
    // Read the message,keep only letters and store  them in lowercase
    
    while(end<message + LENGTH && (charachter=getchar())!='\n')
    {
        charachter=tolower((unsigned char)charachter);
        if(charachter>='a' && charachter<='z')
            *end++=charachter;
    }
    
    //Check whether user has entered letters any letters at all,and if so check if the message is palindrome
    
    if(end>message)
    {
        end--;
        
        for( start=message;start<end;start++,end--)
            if(*start!=*end)break;
        
        if(start>=end)printf("Palindrome.");
        else printf("Not a palindrome.");
    }
    else
        printf("No letters entered.Please try again.");
    
    printf("\n");
    
    
    return EXIT_SUCCESS;
}
