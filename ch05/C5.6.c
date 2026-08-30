//
//  main.c
//  C5.6
//
//  Created by Aleksandar on 6/5/25.
//

/*******************************************************************
 *  Chapter 5, Project 6                                           *
 *                                                                 *
 *  Extends upc.c from Section 4.1 to verify a UPC instead of      *
 *  computing its check digit. The entered code is checked         *
 *  against its own check digit and the program prints either      *
 *  VALID or NOT VALID.                                            *
 *******************************************************************/


#include <stdio.h>

int main(int argc, const char * argv[]) {
    int first_digit,second_digit,third_digit,fourth_digit,fifth_digit,sixth_digit,seventh_digit,eighth_digit,ninth_digit,tenth_digit,eleventh_digit,check_digit,first_sum,second_sum,total;
    
    //Input section
    printf("Enter the 12-digit UPC code (no spaces):");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d",&first_digit,&second_digit,&third_digit,&fourth_digit,&fifth_digit,&sixth_digit,&seventh_digit,&eighth_digit,&ninth_digit,&tenth_digit,&eleventh_digit,&check_digit);
    //End of input
    
    //Calculating expected check digit
    first_sum=first_digit + third_digit + fifth_digit + seventh_digit + ninth_digit + eleventh_digit;
    second_sum=second_digit + fourth_digit + sixth_digit + eighth_digit + tenth_digit;
    total=(first_sum * 3) + second_sum - 1;
    total=9 - total % 10;
    //End of check digit calculation
    
    //Checking whather check digit is valid and printing message to the user
    if(total==check_digit)
        printf("UPC code is valid.\n");
    else
        printf("Invalid UPC code.\n");
    //End of check digit verification
    
    
    return 0;
}
