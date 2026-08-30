//
//  main.c
//  8.15
//
//  Created by Aleksandar on 17. 6. 2026..
//

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
