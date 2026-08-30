//
//  main.c
//  8.1
//
//  Created by Aleksandar on 14. 6. 2026..
//

/*******************************************************************
 *  Chapter 8, Project 1                                           *
 *                                                                 *
 *  Extends repdigit.c from Section 8.1 so that it does not only   *
 *  report whether a digit repeats, but lists which digits do.     *
 *                                                                 *
 *  Enter a number: 939577                                         *
 *  Repeated digit(s): 7 9                                         *
 *******************************************************************/


#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
int main(int argc, const char * argv[]) {
    
    bool digit_seen[10]={false};
    int n,digit;
    
    printf("Enter a number:");
    scanf("%d",&n);
    
    printf("Repeated digit(s):");
    
    while(n>0)
    {
        digit=n%10;
        if(digit_seen[digit])
            printf(" %d",digit);
        else
            digit_seen[digit]=true;
        
        n=n/10;
            
    }
    printf("\n");
    
    
    
    return EXIT_SUCCESS;
}
