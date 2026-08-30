//
//  main.c
//  8.13
//
//  Created by Aleksandar on 17. 6. 2026..
//

#include <stdlib.h>
#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    char surname[20],first_letter_name;
    int i=0,j;
    printf("Enter a first and last name:");
    
    first_letter_name=getchar();
    while(getchar()!=' ');
    
    while(i<20 && (surname[i]=getchar())!='\n')
        i++;

    
    printf("You entered the name:");
    for(j=0;j<i;j++)
        putchar(surname[j]);
    
    printf(", %c.\n",first_letter_name);
    
    return EXIT_SUCCESS;
}
