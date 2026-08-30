//
//  main.c
//  7.11 ver2
//
//  Created by Aleksandar on 8. 6. 2026..
//

#include <stdlib.h>
#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    char current_char,first_initial;
    
    printf("Enter a first and last name:");
    
    do{
        current_char=getchar();
    }
    while(current_char==' ');
    
    first_initial=current_char;
    
    while((current_char=getchar())!=' ' && current_char!='\n')
        ;
    
    do {
        putchar(current_char);
        current_char=getchar();
    } while (current_char!=' ' && current_char!='\n');
    
    printf(", %c.\n",first_initial);
    return EXIT_SUCCESS;
}
