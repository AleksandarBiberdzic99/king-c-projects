//
//  main.c
//  7.6
//
//  Created by Aleksandar on 7. 6. 2026..
//

/*******************************************************************
 *  Chapter 7, Project 6                                           *
 *                                                                 *
 *  Prints the size in bytes of int, short, long, float, double    *
 *  and long double on the current machine.                        *
 *******************************************************************/


#include <stdlib.h>
#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    printf("Size of long(in bytes):%d\n Size of float(in bytes):%d \n Size of double(in bytes):%d \n Size of long double(in bytes):%d \n",(int)sizeof(long),(int)sizeof(float),(int)sizeof(double),(int)sizeof(long double));
    
    return EXIT_SUCCESS;
}
