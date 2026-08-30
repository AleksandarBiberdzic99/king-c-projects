/*******************************************************************
 *  Chapter 6, Project 4                                           *
 *                                                                 *
 *  Extends broker.c from Section 5.2 with a loop so that several  *
 *  trades can be entered in one run. The commission is printed    *
 *  after each trade, and entering 0 ends the program.             *
 *                                                                 *
 *  Enter value of trade: 30000                                    *
 *  Commission: $166.00                                            *
 *                                                                 *
 *  Enter value of trade: 20000                                    *
 *  Commission: $144.00                                            *
 *                                                                 *
 *  Enter value of trade: 0                                        *
 *******************************************************************/


#include <stdio.h>

int main(void)
{
    float commission, value;
    
    for(;;)
    {
        printf("Enter value of trade: ");
        scanf("%f", &value);
        
        if(value==0.0f)
            break;
        
        if (value < 2500.00f)
            commission = 30.00f + .017f * value;
        else if (value < 6250.00f)
            commission = 56.00f + .0066f * value;
        else if (value < 20000.00f)
            commission = 76.00f + .0034f * value;
        else if (value < 50000.00f)
            commission = 100.00f + .0022f * value;
        else if (value < 500000.00f)
            commission = 155.00f + .0011f * value;
        else
            commission = 255.00f + .0009f * value;
        
        if (commission < 39.00f)
            commission = 39.00f;
        
        printf("Commission: $%.2f\n", commission);
     }
    
    return 0;
}
