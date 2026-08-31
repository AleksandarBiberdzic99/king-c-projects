//
//  main.c
//  11.3
//
//  Created by Aleksandar on 30. 7. 2026..
//

/*******************************************************************
 *  Chapter 11, Project 3                                          *
 *                                                                 *
 *  Reworks Chapter 6, Project 3 around a function that returns    *
 *  two values through pointers:                                   *
 *                                                                 *
 *      void reduce(int numerator, int denominator,                *
 *                  int *reduced_numerator,                        *
 *                  int *reduced_denominator);                     *
 *                                                                 *
 *  Given a fraction, it reduces it to lowest terms and stores the *
 *  resulting numerator and denominator in the variables the two   *
 *  pointers refer to.                                             *
 *******************************************************************/

#include <stdlib.h>
#include <stdio.h>

void reduce(int numerator, int denominator, int *reduced_numerator,int *reduced_denominator);

int main(int argc, const char * argv[]) {
    
    int numerator,denominator,reduced_n,reduced_d;
    
    for(;;)
    {
        printf("Enter a fraction:");
        if(scanf("%d/%d",&numerator,&denominator)==2 && denominator!=0)break;
        printf("Invalid input.Please try again.\n");
        
        while(getchar()!='\n')
            ;
    }
    
    reduce(numerator,denominator,&reduced_n,&reduced_d);
    
    printf("In lowest terms: %d/%d\n",reduced_n,reduced_d);
    
    return EXIT_SUCCESS;
}

void reduce(int numerator, int denominator, int *reduced_numerator, int *reduced_denominator)
{
    int remainder;
    *reduced_numerator=numerator;
    *reduced_denominator=denominator;
    
    
    
    while(numerator!=0)
    {
        remainder=denominator%numerator;
        denominator=numerator;
        numerator=remainder;
        
    }
    
        *reduced_numerator=*reduced_numerator/denominator;
        *reduced_denominator=*reduced_denominator/denominator;
    
}
