//
//  main.c
//  7.15c
//
//  Created by Aleksandar on 9. 6. 2026..
//

#include <stdlib.h>
#include <stdio.h>

int main(int argc, const char * argv[]) {
    int i,n;
    long factorial=1;
    
    
    /* 7.15 b) Repeat part(a),using an int variable instead.
               Answer:Assuming a 64-bit long int(typical on modern platforms),the largest positive value is 2^63 - 1 or 9.223.372.036.854.775.807.
               Since 20! = 2.432.902.008.176.640.000 fits but 21! = 51.090.942.171.709.440.000 exceeds it, the largest valid n is 20.
     */
    printf("Enter a positive integer:");
    scanf("%d",&n);
    
    for(i=1;i<=n;i++)
        factorial*=i;
    
    printf("Factorial of %d: %ld\n",n,factorial);
        
    
    return EXIT_SUCCESS;
}
