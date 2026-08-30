//
//  main.c
//  7.15e
//
//  Created by Aleksandar on 10. 6. 2026..
//

#include <stdlib.h>
#include <stdio.h>

int main(int argc, const char * argv[]) {
    int i,n;
    float factorial=1;
    
    
    /* 7.15 d) Repeat part(a),using a long long variable instead.
     The float type on my machine is 32 bit data type that uses IEEE 754 single precision format:1 sign bit,8 exponent bits and 23 mantissa bits.Altough 23 mantissa bits are physically stored,the format provides 24 significant bits of precision.This is because every binary number in nomralized scientific notation begins with digit 1.Since leading 1 is the same for every normalized number it is not stored in memory-it is implicit(hidden) bit that hardware adds back automatically,so the toatl precision is 1+23=24 significant bits.A Given that float has only 24 significant bits to store the exact number that doesnt end with zero,maximum precise value that can be represented with float that doesnt end with zero is 2^24=16.777.216.
         14! = 87,178,291,200=87,178,291,200 = 42,567,525 × 2¹¹. The odd part 42,567,525 > 2²⁴, so it needs 26 significant bits.
        13! = 6,227,020,800 = 6,081,075 × 2¹⁰. The odd part 6,081,075 < 2²⁴, so 13! is represented exactly.Therefore the program prints the factorial correctly for n ≤ 13.
     
     */
    printf("Enter a positive integer:");
    scanf("%d",&n);
    
    for(i=1;i<=n;i++)
        factorial*=i;
    
    printf("Factorial of %d: %f\n",n,factorial);
    
    
    return EXIT_SUCCESS;
}
