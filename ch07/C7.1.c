//
//  main.c
//  7.1
//
//  Created by Aleksandar on 7. 6. 2026..
//

/* Prints a table of squares using a for statement */

#include <stdio.h>

int main(void)
{
   long i,n;
    char ch;
  printf("This program prints a table of squares.\n");
  printf("Enter number of entries in table: ");
  scanf("%ld", &n);
    getchar();
    
    
  for (i = 1; i <= n; i++)
  {
      printf("%10ld% 10ld\n", i, i * i);
      if(i%24==0)
      {
          printf("Press Enter to continue...");
          getchar();
          
      }
      
  }

  return 0;
}
