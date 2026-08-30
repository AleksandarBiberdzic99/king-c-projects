//
//  main.c
//  7.4
//
//  Created by Aleksandar on 7. 6. 2026..
//

/*******************************************************************
 *  Chapter 7, Project 4                                           *
 *                                                                 *
 *  Converts a phone number written with letters into its numeric  *
 *  form, using the standard telephone keypad mapping              *
 *  (2=ABC, 3=DEF, 4=GHI, 5=JKL, 6=MNO, 7=PRS, 8=TUV, 9=WXY).      *
 *  Characters that are not letters are copied through unchanged.  *
 *  Letters are assumed to be upper case.                          *
 *                                                                 *
 *  Enter phone number: CALLATT                                    *
 *  2255288                                                        *
 *                                                                 *
 *  Enter phone number: 1-800-COL-LECT                             *
 *  1-800-265-5328                                                 *
 *******************************************************************/


#include <stdlib.h>
#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    signed char ch;
    
    printf("Enter phone number:");
    while((ch=getchar())!='\n')
        {
            switch(ch)
            {
                case 65:
                case 66:
                case 67:
                    printf("2");
                    break;
                case 68:
                case 69:
                case 70:
                    printf("3");
                    break;
                case 71:
                case 72:
                case 73:
                    printf("4");
                    break;
                case 74:
                case 75:
                case 76:
                    printf("5");
                    break;
                case 77:
                case 78:
                case 79:
                    printf("6");
                    break;
                case 80:
                case 82:
                case 83:
                    printf("7");
                    break;
                case 84:
                case 85:
                case 86:
                    printf("8");
                    break;
                case 87:
                case 88:
                case 89:
                    printf("9");
                    break;
                default:
                    printf("%c",ch);
                    break;
            }
        }
    
    printf("\n");
    
    return EXIT_SUCCESS;
}
