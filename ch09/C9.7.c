//
//  main.c
//  9.7
//
//  Created by Aleksandar on 1. 7. 2026..
//

/*******************************************************************
 *  Chapter 9, Project 7                                           *
 *                                                                 *
 *  A faster recursive power function than the one in Section 9.6, *
 *  based on repeated squaring:                                    *
 *                                                                 *
 *      n even:  x^n = (x^(n/2))^2                                 *
 *      n odd:   x^n = x * x^(n-1)                                 *
 *      n == 0:  the function returns 1                            *
 *                                                                 *
 *  The program reads x and n, calls power, and prints the result. *
 *******************************************************************/


#include <stdlib.h>
#include <stdio.h>

int power(int x,int n);

int main(int argc, const char * argv[]) {
    
    int x,n;
    
    printf("Enter x:");
    scanf("%d",&x);
    
    printf("Enter n:");
    scanf("%d",&n);
    
    printf("y=%d\n",power(x,n));
    
    return EXIT_SUCCESS;
}

int power(int x,int n)
{
    if(n==0)
        return 1;
    if(n%2==0)
    {
        int y=power(x,n/2);
        return y*y;
    }
    
    return x*power(x,n-1);
        
}
