//
//  main.c
//  11.3
//
//  Created by Aleksandar on 30. 7. 2026..
//

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
