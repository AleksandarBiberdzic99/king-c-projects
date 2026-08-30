/*******************************************************************
 *  Chapter 8, Project 4                                           *
 *                                                                 *
 *  Modifies reverse.c from Section 8.1 to derive the array length *
 *  from the array itself, using (int) (sizeof(a) / sizeof(a[0]))  *
 *  — either written out directly or wrapped in a macro — instead  *
 *  of a hard-coded constant.                                      *
 *******************************************************************/


#include <stdio.h>

#define N 10
#define LENGTH (int)((sizeof(a))/((sizeof(a[0]))))

int main(void)
{
  int a[N], i;

  printf("Enter %d numbers: ", N);
  for (i = 0; i <LENGTH; i++)
    scanf("%d", &a[i]);

  printf("In reverse order:");
  for (i = LENGTH - 1; i >= 0; i--)
    printf(" %d", a[i]);
  printf("\n");

  return 0;
}
