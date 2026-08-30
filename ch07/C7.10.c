//
//  main.c
//  7.10
//
//  Created by Aleksandar on 7. 6. 2026..
//

#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

int main(int argc, const char * argv[]) {
    
    int counter=0;
    char ch;
    
    
    printf("Enter a sentence:");
    
    while((ch=getchar())!='\n')
    {
        ch=toupper(ch);
        if(ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
            counter++;
    }
    
    printf("Your sentence contains %d vowels\n",counter);
    
    return EXIT_SUCCESS;
}
