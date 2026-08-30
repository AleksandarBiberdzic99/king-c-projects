//
//  main.c
//  7.15
//
//  Created by Aleksandar on 9. 6. 2026..
//

#include <stdlib.h>
#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int i,n;
    short factorial=1;
    
    
    /* 7.15 a) Use a short variable to store the value of the factorial.What is the largest value of n for which the program correctly prints the factorial of n?
               Answer:The largest value of n is 7 ,given that short integer uses 16 bits(which is typical on modern platforms) to store a number of which one is a sign bit,that means that the largest positive number that can be
               stored is 2^15 - 1 or 32767,and 8! with value of 40320 exceeds it.
     */
    printf("Enter a positive integer:");
    scanf("%d",&n);
    
    for(i=1;i<=n;i++)
        factorial*=i;
    
    printf("Factorial of %d: %hd\n",n,factorial);
        
    
    return EXIT_SUCCESS;
}
