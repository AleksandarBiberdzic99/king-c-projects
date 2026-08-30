//
//  main.c
//  7.11
//
//  Created by Aleksandar on 7. 6. 2026..
//

#include <stdlib.h>
#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int counter=0;
    char ch_current,first_letter_of_first_name;
    
    printf("Enter a first name and last name:");
    
    while(counter<1)
    {
        first_letter_of_first_name=getchar();
        counter++;
    }
    
    while(getchar()!=' ')
        ;
    
    while((ch_current=getchar())!='\n')
    {
        if(ch_current!=' ')
        putchar(ch_current);
    }
    
    printf(",%c.\n",first_letter_of_first_name);
    
    return EXIT_SUCCESS;
}
