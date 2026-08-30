//
//  main.c
//  8.1
//
//  Created by Aleksandar on 14. 6. 2026..
//

#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
int main(int argc, const char * argv[]) {
    
    bool digit_seen[10]={false};
    int n,digit;
    
    printf("Enter a number:");
    scanf("%d",&n);
    
    printf("Repeated digit(s):");
    
    while(n>0)
    {
        digit=n%10;
        if(digit_seen[digit])
            printf(" %d",digit);
        else
            digit_seen[digit]=true;
        
        n=n/10;
            
    }
    printf("\n");
    
    
    
    return EXIT_SUCCESS;
}
