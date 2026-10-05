//
//  main.c
//  C13.13
//
//  Created by Aleksandar on 3. 10. 2026..
//


/*********************************************************
 * Chapter 13, Project 13                                *
 *                                                       *
 * Modified version of Chapter 8, Project 15. Encrypts a *
 * message using a Caesar cipher with the function       *
 * encrypt, which shifts each letter in the string       *
 * pointed to by message by the amount given by shift.   *
 *********************************************************/


#include <stdlib.h>
#include <stdio.h>

void encrypt(char *message, int shift);

int main(int argc, const char * argv[]) {
    
    char message[100];
    int shift_amount,length=0,i;
    int ch;
    
    printf("Enter message to be encypted: ");
    
    while((ch=getchar())!='\n' && ch!=EOF)
    {
        message[length]=ch;
        length++;
    }
    message[length]='\0';
    
    printf("Enter shift amount (1-25): ");
    scanf("%d",&shift_amount);
    
    encrypt(message,shift_amount);
    
    printf("Encrypted message: ");
    
    for(i=0;i<length;i++)
    {
        putchar(message[i]);
    }
    
    printf("\n");
    
    return EXIT_SUCCESS;
}


void encrypt(char *message, int shift)
{
    for(;*message!='\0';message++)
        if(*message>='a' && *message<='z')
            *message='a' + (*message - 'a' + shift)%26;
        else if(*message>='A' && *message<='Z')
            *message='A' + (*message - 'A' + shift)%26;
}
