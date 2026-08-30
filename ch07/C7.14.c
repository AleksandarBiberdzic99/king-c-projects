//
//  main.c
//  7.14
//
//  Created by Aleksandar on 9. 6. 2026..
//

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
