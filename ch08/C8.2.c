//
//  main.c
//  8.2
//
//  Created by Aleksandar on 14. 6. 2026..
//

/*******************************************************************
 *  Chapter 8, Project 2                                           *
 *                                                                 *
 *  Extends repdigit.c from Section 8.1 to print a table of how    *
 *  many times each digit occurs in the number.                    *
 *                                                                 *
 *  Enter a number: 41271092                                       *
 *  Digit:        0  1  2  3  4  5  6  7  8  9                     *
 *  Occurrences:  1  2  2  0  1  0  0  1  0  1                     *
 *******************************************************************/


#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
int main(int argc, const char * argv[]) {
    int digit_seen[10]={0};
    int n,m,digit,i;
    
    printf("Enter a number:");
    scanf("%d",&n);
    
   
    m=n;
    while(m>0)
    {
        digit=m%10;
        digit_seen[digit]++;
        m=m/10;
            
    }
    printf("Digit:\t\t");
    for(i=0;i<10;i++)
    {
        printf("%d  ",i);
    }
    printf("\nOccurrences:");
    for(i=0;i<10;i++)
    {
        printf("%d  ",digit_seen[i]);
    }
    
    printf("\n");
    
}
