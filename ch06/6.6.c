//
//  main.c
//  6.6
//
//  Created by Aleksandar on 16. 4. 2026..
//


/*******************************************************************
 *  Chapter 6, Project 6                                           *
 *                                                                 *
 *  Reads a number n and prints every even square between          *
 *  1 and n, one per line.                                         *
 *                                                                 *
 *  For n = 100 the output is:                                     *
 *      4                                                          *
 *      16                                                         *
 *      36                                                         *
 *      64                                                         *
 *      100                                                        *
 *******************************************************************/

#include <stdlib.h>
#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int i,n;
    
    printf("Enter n:");
    scanf("%d",&n);
    
    for(i=2;i*i<=n;i+=2)
        printf("%d\n",i*i);
    
    
    return EXIT_SUCCESS;
}
