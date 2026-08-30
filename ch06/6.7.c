/*******************************************************************
 *  Chapter 6, Project 7                                           *
 *                                                                 *
 *  Rearranges square3.c so that the for loop itself initializes,  *
 *  tests, and increments i. The logic stays the same and no       *
 *  multiplication is used — squares are still built by repeated   *
 *  addition of the odd numbers.                                   *
 *******************************************************************/


#include <stdio.h>

int main(void)
{
    int i, n, odd, square;

    printf("This program prints a table of squares.\n");
    printf("Enter number of entries in table: ");
    scanf("%d", &n);

    
    odd = 1;
    square = 0;
    
    for (i = 1; i <= n;i++ ) {
        printf("%10d%10d\n", i, square);
        square += odd;
        odd += 2;
        printf("%10d%10d\n", i, square);
    }

    return 0;
}
