//
//  main.c
//  6.12
//
//  Created by Aleksandar on 18. 4. 2026..
//

/*******************************************************************
 *  Chapter 6, Project 12                                          *
 *                                                                 *
 *  Variant of Project 11: instead of stopping after a fixed       *
 *  number of terms, the series is summed until the current term   *
 *  drops below a small floating-point value entered by the user.  *
 *******************************************************************/

#include <float.h>
#include <stdlib.h>
#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int i,fact;
    float e,epsilon;
    
    
    printf("Enter the epsilon:");
    scanf("%f",&epsilon);
    
    fact=1;
    e=1.0f;
    i=1;
    
    while(1)
    {
        fact=fact*i;
        
        if((1.0f/fact)<epsilon)
            break;
        
        e=e+1.0f/fact;
        i++;
      
    }
    
    printf("Approximated value of e:%f\n",e);
    
    return EXIT_SUCCESS;
}
