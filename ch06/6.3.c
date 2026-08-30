//
//  main.c
//  6.3
//
//  Created by Aleksandar on 15. 4. 2026..
//

#include <stdlib.h>
#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int numerator,denominator,a,b,reminder,gcd;
    
    printf("Enter a fraction:");
    scanf("%d/%d",&numerator,&denominator);
    
    while(denominator==0)
    {
        printf("\nDenominator can't be 0!\n");
        printf("\nEnter a fraction:");
        scanf("%d/%d",&numerator,&denominator);
    }
    a=numerator;
    b=denominator;
    
    
    while(b!=0)
    {
        reminder=a%b;
        a=b;
        b=reminder;
    }
    
    gcd=a;
    
    printf("In lowest terms: %d/%d\n",numerator/gcd,denominator/gcd);
    
    
    return 0;
}
