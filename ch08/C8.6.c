//
//  main.c
//  8.6
//
//  Created by Aleksandar on 14. 6. 2026..
//

#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
int main(int argc, const char * argv[]) {
    char ch;
    const char letters[26]={'4','8','C','D','3','F','G','H','1','J','K','L','M','N','0','P','Q','R','5','T','U','V','W','X','Y','Z'};
    
    printf("Enter message:");
    ch=getchar();
    printf("You entered:");
    while(ch!='\n')
    {
        
        ch=toupper(ch);
        if(ch >= 'A' && ch <='Z')
        {
            putchar(letters[ch - 'A']);
        }
        else
        {
            putchar(ch);
        }
        ch=getchar();
        
    }
    printf("!!!!!!!!!!\n");
    
    return EXIT_SUCCESS;
}
// A , B , E , I , O , S
