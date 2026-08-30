//
//  main.c
//  7.15f
//
//  Created by Aleksandar on 10. 6. 2026..
//

#include <stdlib.h>
#include <stdio.h>

int main(int argc, const char * argv[]) {
    int i,n;
    double factorial=1;
    
    
    /* 7.15 f) Repeat part(a),using a double variable instead.
     The float type on my machine is 64 bit data type that uses IEEE 754 single precision format:1 sign bit,11 exponent bits and 52 mantissa bits.Altough 52 mantissa bits are physically stored,the format provides 53 significant bits of precision.This is because every binary number in nomralized scientific notation begins with digit 1.Since leading 1 is the same for every normalized number it is not stored in memory-it is implicit(hidden) bit that hardware adds back automatically,so the toatl precision is 1+23=24 significant bits.A Given that double has  53 significant bits to store the exact number that doesnt end with zero,maximum precise value that can be represented with double that doesnt end with zero is 2^53=9.007.199.254.740.992=9*10^15.
         Given that 22!=2.1*10^15 , and 23!=4.9*10^16,so the largest factoriel that can be represented accurately is 22.
         
     
     */
    printf("Enter a positive integer:");
    scanf("%d",&n);
    
    for(i=1;i<=n;i++)
        factorial*=i;
    
    printf("Factorial of %d: %lf\n",n,factorial);
    
    
    return EXIT_SUCCESS;
}
