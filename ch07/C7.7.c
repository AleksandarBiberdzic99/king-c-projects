//
//  main.c
//  7.7
//
//  Created by Aleksandar on 7. 6. 2026..
//

#include <stdlib.h>
#include <stdio.h>

int main(int argc, const char * argv[]) {
    int numerator1 ,denominator1,numerator2,denominator2,numerator_result,denominator_result;
    char operation;
    
    printf("Enter two fractions separated by an opetatuib sign(+,-,*,/):");
    scanf("%d/%d %c %d/%d",&numerator1,&denominator1,&operation,&numerator2,&denominator2);
    switch(operation)
    {
        case '+':
            numerator_result=numerator1*denominator2 + numerator2*denominator1;
            denominator_result=denominator1*denominator2;
            printf("The sum is %d/%d\n",numerator_result,denominator_result);
            break;
        case '-':
            numerator_result=numerator1*denominator2 - numerator2*denominator1;
            denominator_result=denominator1*denominator2;
            printf("The difference is %d/%d\n",numerator_result,denominator_result);
            break;
        case '*':
            numerator_result=numerator1*numerator2;
            denominator_result=denominator1*denominator2;
            printf("The product is %d/%d\n",numerator_result,denominator_result);
            break;
        case '/':
            numerator_result=numerator1*denominator2;
            denominator_result=denominator1*numerator2;
            printf("The quotient is %d/%d\n",numerator_result,denominator_result);
            break;
        default:
            printf("You entered illegal sign operation.");
            break;

    }
    
    
    printf("\n");
    
    return EXIT_SUCCESS;
}
