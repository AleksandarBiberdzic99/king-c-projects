//
//  main.c
//  9.6
//
//  Created by Aleksandar on 1. 7. 2026..
//

/*******************************************************************
 *  Chapter 9, Project 6                                           *
 *                                                                 *
 *  Evaluates the polynomial                                       *
 *                                                                 *
 *      3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6                          *
 *                                                                 *
 *  in a separate function. The program reads a value for x,       *
 *  calls the function, and prints the value it returns.           *
 *******************************************************************/


#include <stdlib.h>
#include <stdio.h>

double calculate_polynomial(double x);

int main(int argc, const char * argv[]) {
    
    double x;
    
    printf("Enter x:");
    scanf("%lf",&x);
    
    calculate_polynomial(x);
    
    
    return EXIT_SUCCESS;
}


double calculate_polynomial(double x)
{
    double y;
    y=3*x*x*x*x*x + 2*x*x*x*x - 5*x*x*x - x*x + 7*x -6;
    printf("y=%lf\n",y);
    return y;
}
