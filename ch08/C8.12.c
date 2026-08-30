//
//  main.c
//  8.12
//
//  Created by Aleksandar on 17. 6. 2026..
//

#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

int main(int argc, const char * argv[]) {
    
    const int scrabble_values[26]={1, 3, 3, 2, 1, 4, 2, 4, 1, 8,5, 1, 3, 1, 1, 3, 10, 1, 1, 1,1, 4, 4, 8, 4, 10};
    int total=0,index;
    int ch;
    
    printf("Enter a value:");
    
    while((ch=getchar())!='\n' && ch!=EOF)
    {
        index=toupper(ch)-'A';
        
        if(index>25 || index<0)
        {
            printf("Your entered charachters that are not allowed.\nPlease try again.\n");
            return 0;
        }
        
        total+=scrabble_values[index];
    }
    
    printf("Scrabble value:%d\n",total);
   
    
    
    return EXIT_SUCCESS;
}
