//
//  main.c
//  9.6
//
//  Created by Aleksandar on 1. 7. 2026..
//

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
