//
//  main.c
//  6.9
//
//  Created by Aleksandar on 18. 4. 2026..
//

/*******************************************************************
 *  Chapter 6, Project 9                                           *
 *                                                                 *
 *  Extends the loan program from Chapter 2, Project 8. Instead    *
 *  of a fixed three payments, the user also enters how many       *
 *  payments to make, and the remaining balance is printed after   *
 *  each one.                                                      *
 *******************************************************************/


#include <stdlib.h>
#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    float loan,interest_rate,monthly_payment;
    int i,number_of_payments;
    
    printf("Enter amount of loan:");
    scanf("%f",&loan);
    printf("Enter intrest rate:");
    scanf("%f",&interest_rate);
    printf("Enter monthly payment:");
    scanf("%f",&monthly_payment);
    printf("Enter number of payments:");
    scanf("%d",&number_of_payments);
    
    
    for(i=0;i<number_of_payments;i++)
    {
        loan=loan*(1+(interest_rate/100.0)/12) - monthly_payment;
        if(loan<=0)
        {
            printf("Loan paid off after %d payments!\n",i+1);
            break;
        }
        printf("Balance after %d. payment:%.2f\n",i+1,loan);
    }
    
    
    return EXIT_SUCCESS;
}
