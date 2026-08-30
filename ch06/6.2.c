//
//  main.c
//  6.2
//
//  Created by Aleksandar on 15. 4. 2026..
//

/*******************************************************************
 *  Chapter 6, Project 2                                           *
 *                                                                 *
 *  Reads two integers and prints their greatest common divisor.   *
 *                                                                 *
 *  Enter two integers: 12 28                                      *
 *  Greatest common divisor: 4                                     *
 *                                                                 *
 *  Uses Euclid's algorithm: while n is not zero, replace the      *
 *  pair (m, n) with (n, m % n); when n reaches zero, m holds      *
 *  the GCD.                                                       *
 *******************************************************************/


#include <stdlib.h>
#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int a,b,reminder;
    
    printf("Enter two integers:");
    scanf("%d%d",&a,&b);
    
    
    
    while(b!=0)
    {
        reminder=a%b;
        a=b;
        b=reminder;
    }
    
  
    
    printf("Greatest common divisor: %d\n",a);
    
    
    
    
    return EXIT_SUCCESS;
}
