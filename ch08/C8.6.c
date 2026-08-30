//
//  main.c
//  8.6
//
//  Created by Aleksandar on 14. 6. 2026..
//

/*******************************************************************
 *  Chapter 8, Project 6                                           *
 *                                                                 *
 *  A "B1FF filter" that rewrites a message in the exaggerated     *
 *  style of an old-school Internet newbie: everything is put in   *
 *  upper case, certain letters are swapped for digits             *
 *  (A->4, B->8, E->3, I->1, O->0, S->5), and about ten            *
 *  exclamation marks are tacked on at the end.                    *
 *                                                                 *
 *  Enter message: Hey dude, C is rilly cool                       *
 *  In B1FF-speak: H3Y DUD3, C 15 R1LLY C00L!!!!!!!!!!             *
 *                                                                 *
 *  The message is first stored in a character array, then         *
 *  translated and printed one character at a time.                *
 *******************************************************************/


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
