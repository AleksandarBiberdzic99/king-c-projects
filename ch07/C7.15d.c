//
//  main.c
//  7.15d
//
//  Created by Aleksandar on 10. 6. 2026..
//

#include <stdlib.h>
#include <stdio.h>

int main(int argc, const char * argv[]) {
    int i,n;
    long long factorial=1;
    
    
    /* 7.15 d) Repeat part(a),using a long long variable instead(if your compiler supports the long long type).
               Answer:long long int is 64-bit ,the largest positive value is 2^63 - 1 or 9.223.372.036.854.775.807.
               Since 20! = 2.432.902.008.176.640.000 fits but 21! = 51.090.942.171.709.440.000 exceeds it, the largest valid n is 20.
     */
    printf("Enter a positive integer:");
    scanf("%d",&n);
    
    for(i=1;i<=n;i++)
        factorial*=i;
    
    printf("Factorial of %d: %lld\n",n,factorial);
        
    
    return EXIT_SUCCESS;
}
