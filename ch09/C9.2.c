//
//  main.c
//  9.2
//
//  Created by Aleksandar on 29. 6. 2026..
//

/*******************************************************************
 *  Chapter 9, Project 2                                           *
 *                                                                 *
 *  Reworks Chapter 5, Project 5 so that the bracket calculation   *
 *  lives in its own function: given an amount of taxable income,  *
 *  it returns the tax due.                                        *
 *******************************************************************/


#include <stdlib.h>
#include <stdio.h>

float calculate_tax(float income);

int main(int argc, const char * argv[]) {
    float income;
    
    printf("Enter the amount of taxable income:");
    scanf("%f",&income);
    
    printf("Tax due:$%.2f\n",calculate_tax(income));
    
    return EXIT_SUCCESS;
}


float calculate_tax(float income)
{
    float tax;
    
    if(income<0)
    {
        printf("Invalid income amount.\n");
        exit(EXIT_FAILURE);
    }
    else if(income<=750)
        tax=income * 0.01f;
    else if(income<=2250)
        tax= 7.5f + (income - 750) * 0.02f;
    else if(income<=3750)
        tax= 37.5f + (income - 2250) * 0.03f;
    else if(income<=5250)
        tax=82.5f + (income - 3750) * 0.04f;
    else if(income<=7000)
        tax=142.5f + (income - 5250) * 0.05f;
    else
        tax=230.0f + (income - 7000) * 0.06f;
    
    return tax;
}
