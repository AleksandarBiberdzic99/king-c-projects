//
//  main.c
//  7.15g
//
//  Created by Aleksandar on 10. 6. 2026..
//

#include <stdlib.h>
#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int i,n;
    long double factorial=1;
    
    
    /* 7.15 g) Repeat part(a),using a long double variable instead.
     Long double on MacOS/ARM64 is implemented as 64 nit IEEE double,so tha maximum value of n that gives correct factoriel is identical to previous question for double 22.On Linux/x86/64 system long double is implemented as 80 bit extended format with mantisa 65 bits long and exoonent with 15 bits.Given that  2⁶⁴ ≈ 1,84 × 10¹⁹.  26!≈ 4,8 × 10¹⁹ is too large to fit,the next smallest value that fits is 25!≈ 3,7 × 10¹⁸ so the answer for largest n that long double gives correct factoriel on Linux/x86 sytem is 25.
         
     
     */
    printf("Enter a positive integer:");
    scanf("%d",&n);
    
    for(i=1;i<=n;i++)
        factorial*=i;
    
    printf("Factorial of %d: %Lf\n",n,factorial);
    
    
    return EXIT_SUCCESS;
    
}
