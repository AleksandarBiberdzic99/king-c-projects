//
//  main.c
//  C13.4
//
//  Created by Aleksandar on 21. 9. 2026..
//

/*********************************************************
 * Chapter 13, Project 4                                 *
 *                                                       *
 * Echoes its command-line arguments in reverse order.   *
 * Example: "reverse void and null" prints               *
 * "null and void".                                      *
 *********************************************************/

#include <stdlib.h>
#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int i;
    
    for(i=argc-1;i>0;i--)
        printf("%s ",argv[i]);
    printf("\n");
    
    return EXIT_SUCCESS;
}
