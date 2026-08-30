/*******************************************************************
 *  Chapter 8, Project 5                                           *
 *                                                                 *
 *  Modifies interest.c from Section 8.1 to compound interest      *
 *  monthly rather than annually. The output format is unchanged   *
 *  — balances are still reported once per year.                   *
 *******************************************************************/

#include <stdio.h>

#define NUM_RATES ((int) (sizeof(value) / sizeof(value[0])))
#define INITIAL_BALANCE 100.00

int main(void)
{
  int i, low_rate, num_years, year,j;
  double value[5],month_rate;

  printf("Enter interest rate: ");
  scanf("%d", &low_rate);
  printf("Enter number of years: ");
  scanf("%d", &num_years);
  
    
  printf("\nYears");
  for (i = 0; i < NUM_RATES; i++) {
    printf("%6d%%", low_rate + i);
    value[i] = INITIAL_BALANCE;
  }
  printf("\n");

  for (year = 1; year <= num_years; year++) {
    printf("%3d    ", year);
    for (i = 0; i < NUM_RATES; i++) {
        month_rate=1 + ((double)low_rate + i)/12/100;
        for(j=1;j<=12;j++)
        {
            value[i]=value[i]*month_rate;
        }
      printf("%7.2f", value[i]);
    }
    printf("\n");
  }

  return 0;
}
