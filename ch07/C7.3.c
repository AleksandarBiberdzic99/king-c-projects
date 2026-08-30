//
//  main.c
//  7.3
//
//  Created by Aleksandar on 7. 6. 2026..
//

/* Sums a series of numbers (using double variables) */

#include <stdio.h>

int main(void)
{
    double n, sum = 0.0;

    printf("This program sums a series of real numbers.\n");

    printf("Enter numbers (0 to terminate): ");
    scanf("%lf", &n);
    while (n != 0) {
        sum += n;
        scanf("%lf", &n);
    }
    printf("The sum is: %f\n", sum);

    return 0;
}
