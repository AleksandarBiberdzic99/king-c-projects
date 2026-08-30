//
//  main.c
//  7.14
//
//  Created by Aleksandar on 9. 6. 2026..
//

/*******************************************************************
 *  Chapter 7, Project 14                                          *
 *                                                                 *
 *  Computes the square root of a positive number by Newton's      *
 *  method. Starting from the guess y = 1, each new guess is the   *
 *  average of y and x / y, which converges on the true root.      *
 *                                                                 *
 *  Enter a positive number: 3                                     *
 *  Square root: 1.73205                                           *
 *                                                                 *
 *  All variables are double for accuracy. Iteration stops when    *
 *  the absolute difference between the old and new y falls below  *
 *  0.00001 * y; fabs from <math.h> provides the absolute value.   *
 *******************************************************************/


#include <stdlib.h>
#include <stdio.h>
#include <math.h>
int main(int argc, const char * argv[]) {
   
    double x,y,y_previous=1;
    
    printf("Enter a positive number:");
    scanf("%lf",&x);
    
    y=(y_previous+x/y_previous)/2;
    
    while( fabs(y-y_previous)>=y*0.00001)
    {
        y_previous=y;
        y=(y_previous+x/y_previous)/2;
        
    }
    
    printf("Square root: %.5lf\n",y);
    
    return EXIT_SUCCESS;
}
