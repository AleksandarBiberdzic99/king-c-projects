//
//  main.c
//  C5.3
//
//  Created by Aleksandar on 6/5/25.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    float commission,price_per_share,total;
    int shares_number;
    
    printf("Enter the number of shares:");
    scanf("%d",&shares_number);
    printf("Enter the price per share (in dollars) :");
    scanf("%f",&price_per_share);
    
    total=shares_number*price_per_share;
    
    if (total < 2500.00f)
    commission = 30.00f + .017f * total;
    else if (total < 6250.00f)
        commission = 56.00f + .0066f * total;
    else if (total < 20000.00f)
    commission = 76.00f + .0034f * total;
    else if (total < 50000.00f)
    commission = 100.00f + .0022f * total;
    else if (total < 500000.00f)
    commission=155.00f + .0011f * total;
    else
    commission = 255.00f + .0009f * total;
    if (commission < 39.00f)
    commission = 39.00f ;
    printf("Commission: $%.2f\n", commission) ;
    
    if(shares_number<2000)
        printf("Comission of the rival broker:%.2f$\n",33+0.03f*shares_number*price_per_share);
    else
        printf("Comission of the rival broker:%.2f$\n",33+0.02f*shares_number*price_per_share);
    
    return 0;
}
