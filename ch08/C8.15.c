//
//  main.c
//  8.15
//
//  Created by Aleksandar on 17. 6. 2026..
//

/*******************************************************************
 *  Chapter 8, Project 15                                          *
 *                                                                 *
 *  Encrypts a message with a Caesar cipher. Each letter is        *
 *  replaced by the one a fixed number of positions later in the   *
 *  alphabet, wrapping around at Z.                                *
 *                                                                 *
 *  Enter message to be encrypted: Go ahead, make my day.          *
 *  Enter shift amount (1-25): 3                                   *
 *  Encrypted message: Jr dkhdg, pdnh pb gdb.                      *
 *                                                                 *
 *  Entering 26 minus the original key decrypts the message.       *
 *                                                                 *
 *  Messages are at most 80 characters. Non-letters pass through   *
 *  unchanged and letters keep their case. The wrap-around is      *
 *  handled with ((ch - 'A') + n) % 26 + 'A' for upper case, and   *
 *  the matching expression for lower case.                        *
 *******************************************************************/


#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

int main(int argc, const char * argv[]) {
    
    char message[100], encrypted_message[100];
    int shift_amount,length=0,i;
    int ch;
    
    printf("Enter message to be encypted:");
    
    while((ch=getchar())!='\n' && ch!=EOF)
    {
        message[length]=ch;
        length++;
    }
        
    printf("Enter shift amount (1-25):");
    scanf("%d",&shift_amount);
    
    for(i=0;i<length;i++)
    {
        if(message[i]>='A' && message[i]<='Z')
        {
            encrypted_message[i]='A'+(message[i]-'A' + shift_amount)%26;
        }
        
        else if(message[i]>='a' && message[i]<='z')
        {
            encrypted_message[i]='a'+(message[i]-'a' + shift_amount)%26;
        }
        else
        {
            encrypted_message[i]=message[i];
        }
    }
    
    
    printf("Encrypted message: ");
    
    for(i=0;i<length;i++)
    {
        message[i]='\0';
        putchar(encrypted_message[i]);
    }
    
    printf("\n");
    
    return EXIT_SUCCESS;
}
